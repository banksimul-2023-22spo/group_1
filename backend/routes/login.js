const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');

router.post('/', 
  function(request, response) {
    if(request.body.idkortti && request.body.pinkoodi){
      const user = request.body.idkortti;
      const pass = request.body.pinkoodi;
      
        login.checkPassword(user, function(err, dbResult) {
          if(err){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(pass,dbResult[0].pinkoodi, function(err,compareResult) {
                if(compareResult) {
                  console.log("success");
                  const token = generateAccessToken({ idkortti: user });
                  response.send(token);
                }
                else {
                    console.log("wrong pinkoodi");
                 console.log("pass: ", pass);
                 console.log("dbResult[0].pinkoodi: ", dbResult[0].pinkoodi);
                 console.log("idkortti: ", user);
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("idkortti or pinkoodi missing");
      response.send(false);
    }
  }
);

function generateAccessToken(idkortti) {
  dotenv.config();
  return jwt.sign(idkortti, process.env.MY_TOKEN, { expiresIn: '1000s' });
}

module.exports=router;
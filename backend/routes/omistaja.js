const express = require('express');
const router = express.Router();

const omistaja = require('../models/omistaja_model');

router.get('/',function(request,response){
    omistaja.getAll(function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/:idomistaja',function(request,response){
    omistaja.getById(request.params.idomistaja, function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/getbyid/:idkortti',function(request,response){
  omistaja.getByKortti(request.params.idkortti, function(err,dbResult){
      if(err){
          response.json(err);
      }
      else{
          response.json(dbResult);
      }
  })
});
router.post('/', 
function(request, response) {
  omistaja.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      //response.json(dbResult);
      response.json(dbResult.affectedRows);
    }
  });
});
router.delete('/:idomistaja', 
function(request, response) {
  omistaja.delete(request.params.idomistaja, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});
router.put('/:idomistaja', 
function(request, response) {
  omistaja.update(request.params.idomistaja, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});

module.exports=router;

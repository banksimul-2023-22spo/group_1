const express = require('express');
const router = express.Router();
const tili = require('../models/tili_model');

router.get('/',function(request,response){
    tili.getAll(function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/:idtili',function(request,response){
    tili.getById(request.params.idtili, function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/getbykortti/:idkortti',function(request,response){
  tili.getByIdkortti(request.params.idkortti, function(err,dbResult){
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
  tili.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      //response.json(dbResult);
      response.json(dbResult.affectedRows);
    }
  });
});
router.delete('/:idtili', 
function(request, response) {
  tili.delete(request.params.idtili, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});
router.put('/:idtili', 
function(request, response) {
  tili.update(request.params.idtili, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});

module.exports=router;
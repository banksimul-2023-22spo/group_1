const express = require('express');
const router = express.Router();
const kortti = require('../models/kortti_model');

router.get('/',function(request,response){
    kortti.getAll(function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/:idkortti',function(request,response){
    kortti.getById(request.params.idkortti, function(err,dbResult){
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
  kortti.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      //response.json(dbResult);
      response.json(dbResult.affectedRows);
    }
  });
});
router.delete('/:idkortti', 
function(request, response) {
  kortti.delete(request.params.idkortti, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});
router.put('/:idkortti', 
function(request, response) {
  kortti.update(request.params.idkortti, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});

module.exports=router;
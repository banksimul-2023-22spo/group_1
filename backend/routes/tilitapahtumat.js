const express = require('express');
const router = express.Router();
const tilitapahtumat = require('../models/tilitapahtumat_model');

router.get('/',function(request,response){
    tilitapahtumat.getAll(function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/:idtilitapahtumat',function(request,response){
    tilitapahtumat.getById(request.params.idtilitapahtumat, function(err,dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult);
        }
    })
});
router.get('/getbytiliid/:idtili',function(request,response){
  tilitapahtumat.getByTiliId(request.params.idtili, function(err,dbResult){
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
  tilitapahtumat.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      //response.json(dbResult);
      response.json(dbResult.affectedRows);
    }
  });
});
router.delete('/:idtilitapahtumat', 
function(request, response) {
  tilitapahtumat.delete(request.params.idtilitapahtumat, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});
router.put('/:idtilitapahtumat', 
function(request, response) {
  tilitapahtumat.update(request.params.idtilitapahtumat, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult.affectedRows);
    }
  });
});

module.exports=router;
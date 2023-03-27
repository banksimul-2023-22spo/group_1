const db = require('../database');

const login={
    checkPassword:function(idkortti, callback){
        db.query("select pinkoodi from kortti where idkortti=?", idkortti, callback);
    }
}


module.exports = login;

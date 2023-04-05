const db = require('../database');

const tili = {
    getAll: function (callback) {
        return db.query('select * from tili', callback);
    },
    getById: function (idtili, callback) {
        return db.query('select * from tili where idtili=?', [idtili], callback);
    },

    getByIdkortti: function (idkortti, callback){
        return db.query('SELECT tili.idtili FROM tili JOIN kortti ON tili.idkortti = kortti.idkortti WHERE kortti.idkortti =?',[idkortti], callback);

    getSaldoById: function (idtili, callback) {
        return db.query('select saldo from tili where idtili=?', [idtili], callback);
    },
    getCreditById: function (idtili, callback) {
        return db.query('select credit from tili where idtili=?', [idtili], callback);

    },
    add: function (tili, callback) {
        return db.query('insert into tili (idtili, credit, saldo, idkortti) values(?,?,?,?)',[tili.idtili, tili.credit, tili.saldo, tili.idkortti],callback);
        },
    
    delete: function (idtili, callback) {
        return db.query('delete from tili where idtili=?', [idtili], callback);
    },
    update: function (idtili, tili, callback) {
        return db.query('update tili set idtili=?, credit=?, saldo=?, idkortti=? where idtili=?', [tili.idtili, tili.credit, tili.saldo, tili.idkortti, idtili],callback);
        },
};
module.exports = tili;
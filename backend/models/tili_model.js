const db = require('../database');

const tili = {
    getAll: function (callback) {
        return db.query('select * from tili', callback);
    },
    getById: function (idtili, callback) {
        return db.query('select * from tili where idtili=?', [idtili], callback);
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
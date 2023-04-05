const db = require('../database');

const tilitapahtumat = {
    getAll: function (callback) {
        return db.query('select * from tilitapahtumat', callback);
    },
    getById: function (idtilitapahtumat, callback) {
        return db.query('select * from tilitapahtumat where idtilitapahtumat=?', [idtilitapahtumat], callback);
    },
    getByTiliId: function (idtili, callback) {
        return db.query('SELECT * FROM tilitapahtumat WHERE idtili =?', [idtili], callback);
    },
    add: function (tilitapahtumat, callback) {
        return db.query('insert into tilitapahtumat (aika, summa, idtili) values(?,?,?)',[tilitapahtumat.aika, tilitapahtumat.summa, tilitapahtumat.idtili],callback);
        },
    
    delete: function (idtilitapahtumat, callback) {
        return db.query('delete from tilitapahtumat where idtilitapahtumat=?', [idtilitapahtumat], callback);
    },
    update: function (idtilitapahtumat, tilitapahtumat, callback) {
        return db.query('update tilitapahtumat set idtilitapahtumat=?, aika=?, summa=?, idtili=? where idtilitapahtumat=?', [tilitapahtumat.idtilitapahtumat, tilitapahtumat.aika, tilitapahtumat.summa, tilitapahtumat.idtili, idtilitapahtumat],callback);
        },
};
module.exports = tilitapahtumat;
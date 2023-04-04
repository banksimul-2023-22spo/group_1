const db = require('../database');

const omistaja = {
    getAll: function (callback) {
        return db.query('select * from omistaja', callback);
    },
    getById: function (idomistaja, callback) {
        return db.query('select * from omistaja where idomistaja=?', [idomistaja], callback);
    },
    getByKortti: function (idkortti, callback) {
        return db.query('SELECT omistaja.etunimi, omistaja.sukunimi FROM omistaja JOIN kortti ON kortti.idomistaja = omistaja.idomistaja WHERE kortti.idkortti =?;', [idkortti], callback);
    },
    add: function (omistaja, callback) {
        return db.query('insert into omistaja (etunimi, sukunimi, osoite) values(?,?,?)',[omistaja.etunimi, omistaja.sukunimi, omistaja.osoite],callback);
        },
    
    delete: function (idomistaja, callback) {
        return db.query('delete from omistaja where idomistaja=?', [idomistaja], callback);
    },
    update: function (idomistaja, omistaja, callback) {
        return db.query('update omistaja set etunimi=?, sukunimi=?, osoite=? where idomistaja=?', [omistaja.etunimi, omistaja.sukunimi, omistaja.osoite,idomistaja],callback);
        },
};
module.exports = omistaja;
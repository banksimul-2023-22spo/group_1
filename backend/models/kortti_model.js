const db = require('../database');
const bcrypt = require('bcryptjs');
const saltRounds = 10;

const kortti = {
    getAll: function (callback) {
        return db.query('select * from kortti', callback);
    },
    getById: function (idkortti, callback) {
        return db.query('SELECT kortti.idkortti, kortti.pinkoodi, omistaja.etunimi, omistaja.sukunimi, omistaja.osoite FROM kortti INNER JOIN omistaja ON kortti.idomistaja = omistaja.idomistaja WHERE kortti.idkortti =?', [idkortti], callback);
    },
    add: function (kortti, callback) {
        bcrypt.hash(kortti.pinkoodi, saltRounds, function (err, hashed_pinkoodi) {
            return db.query('insert into kortti (idkortti,idomistaja,pinkoodi) values(?,?,?)',
                [kortti.idkortti, kortti.idomistaja, hashed_pinkoodi],
                callback)
        });
    },
    
    delete: function (idkortti, callback) {
        return db.query('delete from kortti where idkortti=?', [idkortti], callback);
    },
    update: function (idkortti, kortti, callback) {
        bcrypt.hash(kortti.pinkoodi, saltRounds, function (err, hashed_pinkoodi) {
            return db.query('update kortti set idkortti=?, pinkoodi=?, idomistaja=? where idkortti=?',
            [kortti.idkortti, hashed_pinkoodi, kortti.idomistaja, idkortti],
                callback);
        });
    },
};
module.exports = kortti;
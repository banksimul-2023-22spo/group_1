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
    },
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
        withdraw: function(idtili, summa, callback) {
            return new Promise((resolve, reject) => {
              // Fetch the current balance and credit from the database
              db.query('SELECT saldo, credit FROM tili WHERE idtili = ?', [idtili], (error, results) => {
                if (error) {
                  reject(error);
                } else {
                  const currentBalance = results[0].saldo;
                  const currentCredit = results[0].credit;
  
                  // Check if the withdrawal amount exceeds the available balance and credit limit
                  if ((currentBalance - summa) < -currentCredit) {
                    // If the withdrawal amount exceeds the available balance and credit limit, reject the promise
                    const errorObj = "false";
                    reject(errorObj);
                    console.log('Withdrawal amount exceeds credit limit');
                  } else {
                    // Update the balance in the database
                  db.query('UPDATE tili SET saldo = ? WHERE idtili = ?', [currentBalance - summa, idtili], (error, result) => {
                    if (error) {
                      reject(error);
                    } else {
                      // Insert a transaction record into the tilitapahtumat table
                      db.query('INSERT INTO tilitapahtumat (idtili, summa, aika) VALUES (?, ?, CURRENT_DATE())', [idtili, summa], (error, result) => {
                        if (error) {
                          reject(error);
                        } else {
                          resolve(result);
                        }
                      });
                    }
                  });
                }
              }
            });
          }).then(result => {
            // Check if result is the error object indicating failure
            if (result && result.success === false) {
              callback(null, false);
            } else {
              callback(null, result);
            }
          }).catch(error => {
            callback(error);
          });
        }
};
module.exports = tili;
var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const dotenv=require('dotenv');


var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var omistajaRouter = require('./routes/omistaja');
var korttiRouter = require('./routes/kortti');
var tiliRouter = require('./routes/tili');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');

var app = express();
dotenv.config();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);

app.use('/omistaja', omistajaRouter);
app.use('/kortti', korttiRouter);
app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);

module.exports = app;

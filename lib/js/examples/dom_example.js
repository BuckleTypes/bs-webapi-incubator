'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Webapi__Dom__Element = require("../src/Webapi/Webapi__Dom/Webapi__Dom__Element.js");
var Webapi__Dom__Document = require("../src/Webapi/Webapi__Dom/Webapi__Dom__Document.js");
var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

function map(f, param) {
  if (param !== undefined) {
    return Caml_option.some(Curry._1(f, Caml_option.valFromOption(param)));
  }
  
}

function andThen(f, param) {
  if (param !== undefined) {
    return Curry._1(f, Caml_option.valFromOption(param));
  }
  
}

function unwrapUnsafely(param) {
  if (param !== undefined) {
    return Caml_option.valFromOption(param);
  } else {
    throw [
          Caml_builtin_exceptions.invalid_argument,
          "Passed `None` to unwrapUnsafely"
        ];
  }
}

document.createElement("div").className;

map((function (prim) {
        return prim.innerText;
      }), Caml_option.nullable_to_opt(document.createElement("div").nextElementSibling));

map((function (prim) {
        return prim.innerText;
      }), Caml_option.nullable_to_opt(document.createElement("div").parentElement));

var el = unwrapUnsafely(Webapi__Dom__Element.asHtmlElement(document.createElement("div")));

map((function (param) {
        param.appendChild(el);
        return /* () */0;
      }), andThen((function (prim) {
            return Caml_option.nullable_to_opt(prim.body);
          }), Webapi__Dom__Document.asHtmlDocument(document)));

document.createElement("div").addEventListener("mousemove", (function (e) {
        console.log(/* tuple */[
              e.screenX,
              e.screenY
            ]);
        return /* () */0;
      }));

exports.map = map;
exports.andThen = andThen;
exports.unwrapUnsafely = unwrapUnsafely;
exports.el = el;
/*  Not a pure module */

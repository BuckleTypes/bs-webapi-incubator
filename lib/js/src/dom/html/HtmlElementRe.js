'use strict';

var Curry                = require("bs-platform/lib/js/curry.js");
var Js_primitive         = require("bs-platform/lib/js/js_primitive.js");
var NodeRe$Webapi        = require("../nodes/NodeRe.js");
var ElementRe$Webapi     = require("../nodes/ElementRe.js");
var DomTypesRe$Webapi    = require("../DomTypesRe.js");
var EventTargetRe$Webapi = require("../events/EventTargetRe.js");

function Impl() {
  var ofElement = (
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  );
  var ofElement$1 = function (self) {
    return Js_primitive.null_to_opt(Curry._1(ofElement, self));
  };
  var contentEditable = function (self) {
    return DomTypesRe$Webapi.decodeContentEditable(self.contentEditable);
  };
  var setContentEditable = function (self, value) {
    self.contentEditable = DomTypesRe$Webapi.encodeContentEditable(value);
    return /* () */0;
  };
  var dir = function (self) {
    return DomTypesRe$Webapi.decodeDir(self.dir);
  };
  var setDir = function (self, value) {
    self.dir = DomTypesRe$Webapi.encodeDir(value);
    return /* () */0;
  };
  return /* module */[
          /* ofElement */ofElement$1,
          /* contentEditable */contentEditable,
          /* setContentEditable */setContentEditable,
          /* dir */dir,
          /* setDir */setDir
        ];
}

var include = NodeRe$Webapi.Impl(/* module */[]);

EventTargetRe$Webapi.Impl(/* module */[]);

var include$1 = ElementRe$Webapi.Impl(/* module */[]);

var ofElement = (
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  );

function ofElement$1(self) {
  return Js_primitive.null_to_opt(Curry._1(ofElement, self));
}

function contentEditable(self) {
  return DomTypesRe$Webapi.decodeContentEditable(self.contentEditable);
}

function setContentEditable(self, value) {
  self.contentEditable = DomTypesRe$Webapi.encodeContentEditable(value);
  return /* () */0;
}

function dir(self) {
  return DomTypesRe$Webapi.decodeDir(self.dir);
}

function setDir(self, value) {
  self.dir = DomTypesRe$Webapi.encodeDir(value);
  return /* () */0;
}

var nodeType = include[0];

var asHtmlElement = include$1[0];

var ofNode = include$1[1];

var insertAdjacentElement = include$1[2];

var insertAdjacentHTML = include$1[3];

var insertAdjacentText = include$1[4];

exports.Impl                  = Impl;
exports.nodeType              = nodeType;
exports.asHtmlElement         = asHtmlElement;
exports.ofNode                = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML    = insertAdjacentHTML;
exports.insertAdjacentText    = insertAdjacentText;
exports.ofElement             = ofElement$1;
exports.contentEditable       = contentEditable;
exports.setContentEditable    = setContentEditable;
exports.dir                   = dir;
exports.setDir                = setDir;
/* include Not a pure module */

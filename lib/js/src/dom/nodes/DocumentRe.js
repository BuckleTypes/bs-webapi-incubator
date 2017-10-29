'use strict';

var Curry                         = require("bs-platform/lib/js/curry.js");
var Js_primitive                  = require("bs-platform/lib/js/js_primitive.js");
var NodeRe$Webapi                 = require("./NodeRe.js");
var DomTypesRe$Webapi             = require("../DomTypesRe.js");
var ParentNodeRe$Webapi           = require("./ParentNodeRe.js");
var EventTargetRe$Webapi          = require("../events/EventTargetRe.js");
var DocumentOrShadowRootRe$Webapi = require("./DocumentOrShadowRootRe.js");
var NonElementParentNodeRe$Webapi = require("./NonElementParentNodeRe.js");

function Impl() {
  var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );
  var asHtmlDocument$1 = function (self) {
    return Js_primitive.null_to_opt(Curry._1(asHtmlDocument, self));
  };
  var ofNode = function (node) {
    var match = +(NodeRe$Webapi.nodeType(node) === /* Document */8);
    if (match !== 0) {
      return /* Some */[node];
    } else {
      return /* None */0;
    }
  };
  var compatMode = function (self) {
    return DomTypesRe$Webapi.decodeCompatMode(self.compatMode);
  };
  var visibilityState = function (self) {
    return DomTypesRe$Webapi.decodeVisibilityState(self.visibilityState);
  };
  return /* module */[
          /* asHtmlDocument */asHtmlDocument$1,
          /* ofNode */ofNode,
          /* compatMode */compatMode,
          /* visibilityState */visibilityState
        ];
}

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

NonElementParentNodeRe$Webapi.Impl(/* module */[]);

DocumentOrShadowRootRe$Webapi.Impl(/* module */[]);

ParentNodeRe$Webapi.Impl(/* module */[]);

var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );

function asHtmlDocument$1(self) {
  return Js_primitive.null_to_opt(Curry._1(asHtmlDocument, self));
}

function ofNode(node) {
  var match = +(NodeRe$Webapi.nodeType(node) === /* Document */8);
  if (match !== 0) {
    return /* Some */[node];
  } else {
    return /* None */0;
  }
}

function compatMode(self) {
  return DomTypesRe$Webapi.decodeCompatMode(self.compatMode);
}

function visibilityState(self) {
  return DomTypesRe$Webapi.decodeVisibilityState(self.visibilityState);
}

var nodeType = include[0];

exports.Impl            = Impl;
exports.nodeType        = nodeType;
exports.asHtmlDocument  = asHtmlDocument$1;
exports.ofNode          = ofNode;
exports.compatMode      = compatMode;
exports.visibilityState = visibilityState;
/*  Not a pure module */

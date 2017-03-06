'use strict';

var EventRe = require("../../src/dom/eventRe");

var $$event = new Event("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

EventRe.eventPhase($$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

+$$event.altKey;

$$event.code;

+$$event.ctrlKey;

+$$event.isComposing;

$$event.key;

$$event.locale;

$$event.location;

+$$event.metaKey;

+$$event.repeat;

+$$event.shiftKey;

EventRe.getModifierState(/* Alt */0, $$event);

$$event.button;

$$event.buttons;

$$event.clientX;

$$event.clientY;

$$event.movementX;

$$event.movementY;

$$event.offsetX;

$$event.offsetY;

$$event.pageX;

$$event.pageY;

$$event.region;

$$event.relatedTarget;

$$event.screenX;

$$event.screenY;

$$event.x;

$$event.y;

$$event.pointerId;

$$event.width;

$$event.height;

$$event.pressure;

$$event.tiltX;

$$event.tiltY;

EventRe.pointerType($$event);

+$$event.isPrimary;

exports.$$event = $$event;
/* event Not a pure module */

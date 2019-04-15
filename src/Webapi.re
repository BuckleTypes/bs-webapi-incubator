type rafId;

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";

module Base64 = Webapi__Base64;
module Canvas = Webapi__Canvas;
module Dom = Webapi__Dom;

module File = {
  include Webapi__File;
  [@deprecated "Use `Webapi.Url` instead"] module Url = Webapi__Url;
};

module Url = Webapi__Url;

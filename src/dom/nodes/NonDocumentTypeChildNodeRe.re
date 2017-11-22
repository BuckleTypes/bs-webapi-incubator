/* Mixin */
module Impl = (T: {type t;}) => {
  [@bs.get] [@bs.return null_to_opt] external previousElementSibling : T.t => option(Dom.element) = "";
  [@bs.get] [@bs.return null_to_opt] external nextElementSibling : T.t => option(Dom.element) = "";
};

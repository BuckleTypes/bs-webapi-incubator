module Impl = (T: {type t;}) => {
  [@bs.get] external altKey : T.t => bool = "";
  [@bs.get] external button : T.t => int = "";
  [@bs.get] external buttons : T.t => int /* bitmask */ = "";
  [@bs.get] external clientX : T.t => int = "";
  [@bs.get] external clientY : T.t => int = "";
  [@bs.get] external ctrlKey : T.t => bool = "";
  [@bs.get] external metaKey : T.t => bool = "";
  [@bs.get] external movementX : T.t => int = "";
  [@bs.get] external movementY : T.t => int = "";
  [@bs.get] external offsetX : T.t => int = ""; /* experimental, but widely supported */
  [@bs.get] external offsetY : T.t => int = ""; /* experimental, but widely supported */
  [@bs.get] external pageX : T.t => int = ""; /* experimental, but widely supported */
  [@bs.get] external pageY : T.t => int = ""; /* experimental, but widely supported */
  [@bs.get] [@bs.return {null_to_opt: null_to_opt}] external region : T.t => option(string) = "";
  [@bs.get] [@bs.return {null_to_opt: null_to_opt}] external relatedTarget : T.t => option(Dom.eventTarget) = "";
  [@bs.get] external screenX : T.t => int = "";
  [@bs.get] external screenY : T.t => int = "";
  [@bs.get] external shiftKey : T.t => bool = "";
  [@bs.get] external x : T.t => int = ""; /* experimental */
  [@bs.get] external y : T.t => int = ""; /* experimental */
  [@bs.send.pipe : T.t] external getModifierState : string /* modifierKey enum */ => bool = "";
  let getModifierState: (DomTypesRe.modifierKey, T.t) => bool =
    (key, self) => getModifierState(DomTypesRe.encodeModifierKey(key), self);
};

type t = Dom.mouseEvent;

include EventRe.Impl({ type nonrec t = t; });
include UiEventRe.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "MouseEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "MouseEvent";

type t = Dom.nodeIterator;

[@bs.get] external root : t => Dom.node = "";
[@bs.get] external referenceNode : t => Dom.node = "";
[@bs.get] external pointerBeforeReferenceNode : t => bool = "";
[@bs.get] external whatToShow : t => DomTypesRe.WhatToShow.t = "";
[@bs.get] [@bs.return null_to_opt] external filter : t => option(Dom.nodeFilter) = "";

[@bs.send.pipe : t] external nextNode : option(Dom.node) = "";
[@bs.send.pipe : t] external previousNode : option(Dom.node) = "";
[@bs.send.pipe : t] external detach : unit = "";

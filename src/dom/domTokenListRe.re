type t = DomTypesRe.domTokenList;

external length : t => int = "" [@@bs.get];

external item : int => option string = "" [@@bs.send.pipe: t] [@@bs.return {undefined_to_opt: undefined_to_opt}];

external add : string => unit = "" [@@bs.send.pipe: t];
external addMany : array string => unit = "add" [@@bs.send.pipe: t] [@@bs.splice];
external contains : string => bool = "contains" [@@bs.send.pipe: t];
/* entries: iterator API, should have language support */
external forEach : (string => int => unit) => unit = "" [@@bs.send.pipe: t];
/* keys: iterator API, should have language support */
external remove : string => unit = "" [@@bs.send.pipe: t];
external removeMany : array string => unit = "remove" [@@bs.send.pipe: t] [@@bs.splice];
external replace : string => string => unit = "" [@@bs.send.pipe: t]; /* experimental */
external supports : string => bool = "" [@@bs.send.pipe: t]; /* experimental, Content Management Level 1 */
external toggle : string => bool = "" [@@bs.send.pipe: t];
external toggleForced : string => Js.boolean => bool = "toggle" [@@bs.send.pipe: t];
let toggleForced : string => t => bool = fun token self => toggleForced token Js.true_ self;
external toString : string = "" [@@bs.send.pipe: t];
/* values: iterator API, should have language support */

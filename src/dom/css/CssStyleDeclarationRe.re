type t = Dom.cssStyleDeclaration;

type cssRule; /* TODO: Move to DomRe */

[@bs.get] external cssText : t => string = "";

[@bs.set] external setCssText : (t, string) => unit = "cssText";

[@bs.get] external length : t => int = "";

[@bs.get] external parentRule : t => cssRule = "";

[@bs.send.pipe : t] external getPropertyPriority : string => string = "";

[@bs.send.pipe : t] external getPropertyValue : string => string = "";

[@bs.send.pipe : t] external item : int => string = "";

[@bs.send.pipe : t] external removeProperty : string => string = "";

[@bs.send.pipe : t] external setProperty : (string, string, string) => unit =
  "" /* not mentioned by MDN and not implemented by chrome, but in the CSSOM spec:  https://drafts.csswg.org/cssom/#the-cssstyledeclaration-interface */; /*external setPropertyValue : string => string => unit = "" [@@bs.send.pipe: t];*/

/* CSS2Properties */
[@bs.get] external azimuth : t => string = "";

[@bs.get] external background : t => string = "";

[@bs.get] external backgroundAttachment : t => string = "";

[@bs.get] external backgroundColor : t => string = "";

[@bs.get] external backgroundImage : t => string = "";

[@bs.get] external backgroundPosition : t => string = "";

[@bs.get] external backgroundRepeat : t => string = "";

[@bs.get] external border : t => string = "";

[@bs.get] external borderCollapse : t => string = "";

[@bs.get] external borderColor : t => string = "";

[@bs.get] external borderSpacing : t => string = "";

[@bs.get] external borderStyle : t => string = "";

[@bs.get] external borderTop : t => string = "";

[@bs.get] external borderRight : t => string = "";

[@bs.get] external borderBottom : t => string = "";

[@bs.get] external borderLeft : t => string = "";

[@bs.get] external borderTopColor : t => string = "";

[@bs.get] external borderRightColor : t => string = "";

[@bs.get] external borderBottomColor : t => string = "";

[@bs.get] external borderLeftColor : t => string = "";

[@bs.get] external borderTopStyle : t => string = "";

[@bs.get] external borderRightStyle : t => string = "";

[@bs.get] external borderBottomStyle : t => string = "";

[@bs.get] external borderLeftStyle : t => string = "";

[@bs.get] external borderTopWidth : t => string = "";

[@bs.get] external borderRightWidth : t => string = "";

[@bs.get] external borderBottomWidth : t => string = "";

[@bs.get] external borderLeftWidth : t => string = "";

[@bs.get] external borderWidth : t => string = "";

[@bs.get] external bottom : t => string = "";

[@bs.get] external captionSide : t => string = "";

[@bs.get] external clear : t => string = "";

[@bs.get] external clip : t => string = "";

[@bs.get] external color : t => string = "";

[@bs.get] external content : t => string = "";

[@bs.get] external counterIncrement : t => string = "";

[@bs.get] external counterReset : t => string = "";

[@bs.get] external cue : t => string = "";

[@bs.get] external cueAfter : t => string = "";

[@bs.get] external cueBefore : t => string = "";

[@bs.get] external cursor : t => string = "";

[@bs.get] external direction : t => string = "";

[@bs.get] external display : t => string = "";

[@bs.get] external elevation : t => string = "";

[@bs.get] external emptyCells : t => string = "";

[@bs.get] external cssFloat : t => string = "";

[@bs.get] external font : t => string = "";

[@bs.get] external fontFamily : t => string = "";

[@bs.get] external fontSize : t => string = "";

[@bs.get] external fontSizeAdjust : t => string = "";

[@bs.get] external fontStretch : t => string = "";

[@bs.get] external fontStyle : t => string = "";

[@bs.get] external fontVariant : t => string = "";

[@bs.get] external fontWeight : t => string = "";

[@bs.get] external height : t => string = "";

[@bs.get] external left : t => string = "";

[@bs.get] external letterSpacing : t => string = "";

[@bs.get] external lineHeight : t => string = "";

[@bs.get] external listStyle : t => string = "";

[@bs.get] external listStyleImage : t => string = "";

[@bs.get] external listStylePosition : t => string = "";

[@bs.get] external listStyleType : t => string = "";

[@bs.get] external margin : t => string = "";

[@bs.get] external marginTop : t => string = "";

[@bs.get] external marginRight : t => string = "";

[@bs.get] external marginBottom : t => string = "";

[@bs.get] external marginLeft : t => string = "";

[@bs.get] external markerOffset : t => string = "";

[@bs.get] external marks : t => string = "";

[@bs.get] external maxHeight : t => string = "";

[@bs.get] external maxWidth : t => string = "";

[@bs.get] external minHeight : t => string = "";

[@bs.get] external minWidth : t => string = "";

[@bs.get] external orphans : t => string = "";

[@bs.get] external outline : t => string = "";

[@bs.get] external outlineColor : t => string = "";

[@bs.get] external outlineStyle : t => string = "";

[@bs.get] external outlineWidth : t => string = "";

[@bs.get] external overflow : t => string = "";

[@bs.get] external padding : t => string = "";

[@bs.get] external paddingTop : t => string = "";

[@bs.get] external paddingRight : t => string = "";

[@bs.get] external paddingBottom : t => string = "";

[@bs.get] external paddingLeft : t => string = "";

[@bs.get] external page : t => string = "";

[@bs.get] external pageBreakAfter : t => string = "";

[@bs.get] external pageBreakBefore : t => string = "";

[@bs.get] external pageBreakInside : t => string = "";

[@bs.get] external pause : t => string = "";

[@bs.get] external pauseAfter : t => string = "";

[@bs.get] external pauseBefore : t => string = "";

[@bs.get] external pitch : t => string = "";

[@bs.get] external pitchRange : t => string = "";

[@bs.get] external playDuring : t => string = "";

[@bs.get] external position : t => string = "";

[@bs.get] external quotes : t => string = "";

[@bs.get] external richness : t => string = "";

[@bs.get] external right : t => string = "";

[@bs.get] external size : t => string = "";

[@bs.get] external speak : t => string = "";

[@bs.get] external speakHeader : t => string = "";

[@bs.get] external speakNumeral : t => string = "";

[@bs.get] external speakPunctuation : t => string = "";

[@bs.get] external speechRate : t => string = "";

[@bs.get] external stress : t => string = "";

[@bs.get] external tableLayout : t => string = "";

[@bs.get] external textAlign : t => string = "";

[@bs.get] external textDecoration : t => string = "";

[@bs.get] external textIndent : t => string = "";

[@bs.get] external textShadow : t => string = "";

[@bs.get] external textTransform : t => string = "";

[@bs.get] external top : t => string = "";

[@bs.get] external unicodeBidi : t => string = "";

[@bs.get] external verticalAlign : t => string = "";

[@bs.get] external visibility : t => string = "";

[@bs.get] external voiceFamily : t => string = "";

[@bs.get] external volume : t => string = "";

[@bs.get] external whiteSpace : t => string = "";

[@bs.get] external widows : t => string = "";

[@bs.get] external width : t => string = "";

[@bs.get] external wordSpacing : t => string = "";

[@bs.get] external zIndex : t => string = "";

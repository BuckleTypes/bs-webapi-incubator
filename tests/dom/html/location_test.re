open Webapi.Dom;
open Location;

let _ = href(location);
let _ = setHref(location, "http://reason.ml");
let _ = protocol(location);
let _ = setProtocol(location, "https");
let _ = host(location);
let _ = setHost(location, "reason.ml");
let _ = hostname(location);
let _ = setHostname(location, "reason.ml");
let _ = port(location);
let _ = setPort(location, "443");
let _ = pathname(location);
let _ = setPathname(location, "/reason/tools.html");
let _ = search(location);
let _ = setSearch(location, "q=reasonml");
let _ = hash(location);
let _ = setHash(location, "merlin-atom");
let _ = username(location);
let _ = setUsername(location, "alonzo.church");
let _ = password(location);
let _ = setPassword(location, "lambda-the-ultimate");
let _ = origin(location);

assign("http://reason.ml", location);
reload(location);
reloadWithForce(location);
replace("http://reason.ml", location);
let _ = toString(location);

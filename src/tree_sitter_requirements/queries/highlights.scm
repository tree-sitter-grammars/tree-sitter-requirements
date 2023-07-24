;; packages

(extras (package) @variable.parameter)

(package) @variable

(path) @markup.link

(url) @markup.link.url

;; versions

(version_cmp) @operator

(version) @number

;; markers

(marker_var) @attribute

(marker_op) @keyword

(marker (quoted_string) @string)

;; options

(option) @function

(global_opt "=" @operator)

(global_opt (argument) @string.special)

;; punctuation

[ "[" "]" "(" ")" ] @punctuation.bracket

[ "," ";" "@" ] @punctuation.delimiter

;; misc

(linebreak) @escape

(ERROR) @error

(comment) @comment

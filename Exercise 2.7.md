> What values do these literals represent? What type does each have?

> (a) "Who goes with F\145rgus?\012"

> (b) 3.14e1L

> (c) 1024f

> (d) 3.14L

The first literal is a ``character string literal``, the octal digits after the `\` represent specific characters. In this case `\145` happens to be the character `e`and `\012` is the character `new line`. This literal is the same as `Who goes with Fergus?\n`.

The literal in (b) is a `long double literal`. It uses scientific notation and the suffix `L` (to specify that it's of type long double). It's value is equal to `3.14 * 10^1` or `31.4`.

The third literal is a `float literal`, it uses the suffix `f`, which specifies that it's of type `float` (floating-point literals are of type double by default). It's value is `1024.0`.

Finally, the last literal is of type `long double literal`. Because of the suffix `L` it is of type `long`. It's value is simply `3.14`.

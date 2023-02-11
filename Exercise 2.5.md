> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:

> (a) 'a', L'a', "a", L"a"

> (b) 10, 10u, 10L, 10uL, 012, 0xC

> (c) 3.14, 3.14f, 3.14L

> (d) 10, 10u, 10., 10e-2

The literals in (a) are all character and character string literals. The first one, `a` is an ordinary `character literal` that usually holds an 8-bit character. The second one, `L'a'` is a `wide-character literal` of type `wchar_t` because of the prefix `L` in front of it, wide characters usually hold 16-bit or 32-bit unicode characters. The third literal, ``"a"`` is a normal ``string literal``, unlike the character literal `a` it also stores the null character `\0`, which computers use to separate strings in their memory, it tells them where a string ends, since everything in their memory is in the form of bits (binary numbers), thus a one-character string literal takes more space than a normal character literal. And the last one, `L"a"`, is a ``wide character string literal``, instead of normal 8-bit characters this string would be made of 16 or 32-bit ones.

The literals in (b) are integer literals, unlike the ones in (a) we also see some prefixes here. The first literal, `10`, is a normal `integer literal` of type `int`. The second one, `10u`, is a `unsigned decimal literal`, which means it is of type `unsigned int` and can only be a positive number, unlike the first literal. The third literal, `10L`, is of type `long`, meaning that it's (probably) a 32-bit **signed** integer . The forth literal, `10uL` combines two suffixes, `u` and `L`, it is an `unsigned long literal`. The fifth one, `012`, has a prefix `0` which is used for `octal literals`, the octal number 12 is equal ot the decimal number 10. Finally, the literal `0xC` also uses a prefix - `0x`, which is used for `hexadecimal literals`. The hexadecimal number C is equal to the decimal number 12. (The hexadecimal system (base 16) has 16 digits: 0, 1, 2, 3, 4, 5 ,6, 7, 8, 9, A, B, C, D, E, F)

In (c) there are floating-point literals. The first of which, `3.14` is a normal `double-precission floating-point literal`, that is of type `double` by default, while the next one `3.14f` is of type `float` as it has specified datatype by the suffix `f`. The last literal in this sequence is `3.14L`, which is a `long double literal` because it is specified that the literal is of type `long` with the suffix `L`.

The last sequence of literals is a mix of integer literals and floating-point ones. The first two literals, `10` and `10u`, are the same as the first two ones in (b) - `signed integer literal` and `unsigned integer literal`. The third literal, `10.`, is a `double literal` as it has a decimal point. The last literal, `10e-2`, uses scientific notation, therefore, it is also a `double literal` that has the value of `10*10^-2` or `0.01`.

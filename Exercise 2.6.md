> What, if any, are the differences between the following definitions:
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

The first two variables store ``decimal numbers``, while the second two store ``octal numbers``. The difference is caused by the prefix `0` used in the second two, that is used for `octal` numbers. The second integer called month would even result in a syntax error, since the octal systems has digits only up to 8, so the value 09 is invalid.

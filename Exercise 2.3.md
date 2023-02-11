> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
cout << u2 - u << endl;
cout << u - u2 << endl;
int i = 10, i2 = 42;
cout << i2 - i << endl;
cout << i - i2 << endl;
cout << i - u << endl;
cout << u - i << endl;
```

The result of the first statement is a positive number, so it will print `32` as expected.
The result of the second statement is a negative value. Since the number is of type ``unsigned int``, the value will wrap around. If the int on our machine is 32-bit one, the result will be ``2^32 - 32`` or ``4294967264``.
The third and forth statements both substract values of type ``signed int``, so nothing unexpected will happen. The results will be ``32`` and ``-32``.
Finally, the last two statements substract ``unsigned int`` from a ``signed int`` and the other way around. The produced value will be of type ``unsigned int``, however, it isn't a negative number in both cases, so once again, nothing unexpected will happen and the console will print ``0`` twice.

```
Expected output:
32
4294967264 (may be different, depends on the machine)
32
-32
0
0
```

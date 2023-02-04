> What are the differences between ``int``, ``long``, ``long long``, and ``short``? Between an ``unsigned`` and a ``signed`` type? Between a ``float`` and a ``double``?

The datatypes ``short``, ``int``, ``long``, ``long long`` all represent integer numbers. The difference between them is in the amount of memory they take and therefore in the maximal values they can store. The minimum size of a ``short`` and an ``int`` is 16 bits, therefore they can store numbers in the range from -2^15 to 2^15 (-32767 to 32767). Usually, ``long`` is larger than an ``int`` and takes 32 bits, thefore it can store numbers as small as -2^31 and as big as 2^31. Finally, ``long long`` is the largest data type that can store integers, it is normally 64 bits and can store any number between -2^63 and 2^63.

The difference between ``signed`` and ``unsigned`` datatypes is that the first one can store both positive and negative numbers, while the second one can store only positive numbers. Also ``unsigned`` types can store larger positive values than ``signed``. For example, an ``unsigned int`` can values up to 2^16, while a ``signed int`` stores values up to 2^15, the difference seems insignificant represented with exponents, but an unsigned int can store twice as large values. The difference is caused by the way computers store values in their memory. In the computer memory everything is stored in binary (0s and 1s), the ``signed`` types usually use one bit to represent whether the number is positive or negative, while ``unsigned`` types don't do that, therefore the memory in which ``unsigned`` types store values is larger by 1 bit and that makes a huge difference when converted into decimal number.

The ``float`` (single precission floating point number) and ``double`` (double precission floating point number) are both used to store floating point numbers. The difference is in their precission, a ``float`` can precisely store a number with up to 6 digits after the floating point, while ``double`` can store up to 10 digits after the floating point. 
Example:
```cpp

float pi1 = 3.1415926535897932384; // 18 digits, more than both can store.
double pi2 = 3.1415926535897932384;

cout << pi1 << "/n" << p2 << endl;
```

```
Expected output (can vary from one machine to another):
3.141592
3.1415926535
```

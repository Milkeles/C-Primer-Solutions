> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
> 
> (a) std::cin >> int input_value;
> 
> (b) int i = { 3.14 };
> 
> (c) double salary = wage = 9999.99;
> 
> (d) int i = 3.14;

The first definition is illegal as the variable is not defined and the istream doesn't recognize it. To solve the problem, we must define the variable first:
```cpp
int int_value;
std:cin >> int_value;
```

The second definition is also illegal. We initialize an `int` variable with a `double`, which will cause data loss and the compiler does not allow this. We can either change the type of i to `double`/`float` or remove the curly braces (which will cause truncation and store only the number 3):
```cpp
double i = { 3.14 }; // float a = { 3.14 }; also works.
```

The third definition is also illegal, we cannot initialize salary with the value of an undefined variable and then assign the value of 9999.99 to both of them. We must first define the variable wage and then we can do that:
```cpp
double wage;
double salary = wage = 9999.99;
``` 

The last definition is valid, we can assign the value of 3.14 to an `int`. However, it will be truncated and lose the numbers after the decimal point, turning into just `3`.

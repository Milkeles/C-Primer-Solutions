> Explain whether the following program fragment is legal.
```cpp
std::cout << "The sum of" << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```
> If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

The program is not legal because we use semicolon to end a statement, therefore, the ``std::cout`` statement ends on the first line and since the output operator ``<<`` cannot be used on its own, the program will show an error.
To fix the program we can write our code like this, removing the semicolons and turning everything into a single statement.

```cpp
std::cout << "The sum of" << v1
          << " and " << v2
          << " is " << v1 + v2 << std::endl;
```

Or this way, keeping the semicolons but adding separate statements.

```cpp
std::cout << "The sum of" << v1;
std::cout << " and " << v2;
std::cout << " is " << v1 + v2 << std::endl;
```

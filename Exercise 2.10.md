> What are the initial values, if any, of each of the following variables?
```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```

The first two variable are defined outside of the main function's body. Therefore, their default values are ``empty string`` and ``0``.
The second two variables, ``local_int`` and ``local_str``, are defined inside the function's body, therefore they are ``uninitialized``. However, while `local_int`'s value is undefined because it is a built-in-type, ``local_str`` has the value of ``empty string`` which is defined by the class, hence attempting to access it will not cause an error, while an attept to access ``local_int`` will.

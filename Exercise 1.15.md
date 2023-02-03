> Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

Syntax error:
```cpp
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (i != 5)
	{
		cout << i;
		// Error: Missing semicolon.
		i++
	}
  return 0;
}
```

Type error:
```cpp
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (i <= 5)
	{
		cout << i;
		// Error: i is not a float datatype, causes data loss and breaks the loop.
		i += 0.1;
	}
  return 0;
}
```

Declaration error:
```cpp
#include <iostream>

int main()
{
	int i = 0;
	while (i <= 5)
	{
		// Error: We did not declare that cout is part of the std namespace and we didn't use the namespace.
		cout << i;
		i += 0.1;
	}
  return 0;
}
```

Note: Something that's missing the book are logical errors. They usually don't return errors as syntax mistakes do not cause them, and thus the compiler cannot detect them, but the programs don't give us the desired results. 

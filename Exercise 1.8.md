> Indicate which, if any, of the following outpt statements are legal:

```
std::cout << "/*"; // Legal. The start of a comment is inside quotes, therefore it is part of the string we'll print;
std::cout << "*/"; // Legal. The end of a comment is inside quotes, therefore it is part of the string we'll print;
std::cout << /* "*/" */; // Illegal. We start a comment outside of the string, therefore the end of the comment will be inside the quotes as the first quotes are part of the comment. This will cause an error.
std::cout << /* "*/" /* "/*" */; // Legal. We start two comments and end them and we have a string that will print. Comment1: /* "*/ | String: " /* " | Commment2: /*" */
```

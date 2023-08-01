🚀 _printf Project: Building Our Custom printf Function from Scratch

In our first Holberton School group project, we enthusiastically engaged in pair programming to create our own custom _printf function. This exciting endeavor took us from ground zero to a hundred, utilizing the power of both VS Code and VIM for development.

💡 Description:
_printf is an innovative implementation of the classic C programming function printf. It serves a similar purpose to printf(3) by allowing us to print formatted data to the standard output (stdout).

The printf() function is an indispensable tool for producing formatted output in our programs. All variants of the printf function utilize the same formatting techniques. A crucial component in the printf function is the format specifier, which defines the layout of the output.




📋 Function Prototype

Our _printf function has the following prototype:

c
Copy code
int _printf(const char *format, ...);
The format parameter can be a simple string without any specifiers, or it can contain specifiers that indicate placeholders for various types of data. The arguments passed to _printf correspond to these specifiers, providing the necessary data to be formatted and printed.

📝 Usage:

To use our custom _printf function, you can follow the familiar syntax of the standard printf function. For example:

c
Copy code
int main() {
int number = 42;
char character = 'A';
char *string = "Hello, world!";

// Simple string without specifiers
_printf("This is a simple string.\n");

// Using specifiers to print variables
_printf("The number is: %d\n", number);
_printf("The character is: %c\n", character);
_printf("The string is: %s\n", string);

return 0;
}
Output:

csharp
Copy code
This is a simple string.
The number is: 42
The character is: A
The string is: Hello, world!
🛠️ Implementation:

Our _printf function is built from scratch, handling various specifiers like %d for integers, %c for characters, %s for strings, etc. The implementation involves parsing the format string, identifying specifiers, and extracting the corresponding arguments to produce the desired output.

We put our collective skills and knowledge together to ensure that our custom _printf function performs efficiently and accurately, making it a valuable addition to our programming toolkit.





📋 Implemented format specifiers
Specifier: Output Example
c Character H
s String Hello
d decimal integer 100
i Integer 100
% % followed by another % %
b Binary 1010
u Unsigned decimal int 100
o Unsigned octal integer 1142
x Unsigned Hzxadecimal (lowcase) 7fa
X Unsigned Hexadecimal (uppercase) 7FA
r Reverse a string olleh





🛠️ Algorithm and logic behind this
check the flowchart [the link is bel]



🛠️ Compilation and Testing

To compile and test our custom _printf function, we use the following command:

bash
Copy code
$ gcc -Wall -Werror -Wextra -pedantic *.c -o custom_printf_test
Example:

Now, let's use our _printf function to print a negative integer:

c
Copy code
#include <stdio.h>

// Assume the custom _printf function is already implemented.

int main() {
int num = -15263;

_printf("Printing the number: %d\n", num);

return 0;
}
Output:

yaml
Copy code
Printing the number: -15263


📋 What our file stand for:
Main.h :The Header file
Get_function.c: This file contains the functions to handle each argument type like (s, c, %, i, d).
Get_more_func.c : This file contains the function to handle each argument type like (b,u, o, x, X)
even_func.c: This file contains the function to handle each argument type like (r, )
get_all.c : this file containe the function how cheks function
stdr_function.c : This file contains the standard function (_putchar).

📋 Functions used:
write
va_start
va_end
va_copy
va_arg


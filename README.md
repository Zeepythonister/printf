# _printf

_printf is a simple custom printf function that formats and prints data to the standard output.

# Description
_printf() functiion formats and prints data to the standard output according to the format specified.

The function has the following conversion specifies:

+ %c - prints a character
+ %d - prints a  integer
+ %s - prints a string
+ %i - prints an integer
+ % - prints percentage;
+ %b - print binary numbers
+ %u - print unsigned integers of type int
+ %x - print hexadecimal numbers in lowercase
+ %X - print hexadecimal numbers in uppercase
+ %o - print octal numbers
+ %r - prints string in reverse order 
+ %R - prints string in ROT13 encoding
+ %p - print pointer addresses
+ ' ' - print a space
+ # -  modifier for unsigned conversion


```bash 
git clone https://github.com/zeepythonister/printf.git
```

# Adding man_3_prinf to you mandb

To add the man_3_prinf page to your mandb run this script

```bash
sudo ./install
```

# Usage
+ include the `main.h ` header file on the function for using _printf().
+ All the files are to be compiled on Ubuntu 1TS
```bash
Compile your code with `gcc -Wall -Werror -Wextra -pedantic *.c`
```

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int i = 10;
    int print;
    char *s = "printf by Zee & eXochus";
    _printf("%d %s %c\n", i, s, 'c');
     print =  _printf("%d", s); /* get number of characters */
     printf("%d\n", print); /* print number of characters */
    return 0;
}


```

# Copyright
Copyright (c) 2022 Zainab Abdulkareem & Ridwan ODUNOLA






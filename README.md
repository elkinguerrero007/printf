<h1 align ="center"> _printf Project </h1>
<br>

## Overview

Here's a low-budget version of the original printf function built in C using only the write, va_start, va_arg, and va_end functions.

This low-budget version of printf must be called using ```_printf()``` and will take in a **format string** , followed by an optional comma and argument list.

```
int _printf(const char *format, ...);
```

The statement above is the prototype of our ```_printf()``` function, and will return the number of chararacters printed.
<br>

When called, it will start reading the string to print looking for a percentage sign ```%``` followed by a  ```formato```, if there are, it will use the corresponding function to print what's demanded. If not, it will just print the string as is.

## Requirements

* [Ubuntu 14.04.06 LTS](https://releases.ubuntu.com/14.04.6/) - Operating system required.

* [GCC 9](https://gcc.gnu.org/gcc-9/) - Compiler used

## Installing and Using

Clone this repository into a new directory:

```
$ git clone https://github.com/elkinguerrero007/printf.git
```

Open the ```main.c``` file and edit the main function, just type ```_printf("Your message goes here")```, then save the file.

Compile with the following:

```
$ gcc *.c -o test
```

Then, run:

```
$ ./test
Your message goes here
$
```

## "Formatos" (i.e. only parameters available at the moment):

- %c: Prints a single character.

- %s: Prints a string of characters.

- %d: Prints integers.

- %i: Prints integers.

## Developers

* Elkin Guerrero Bastidas <[elkinguerrero007](https://github.com/elkinguerrero007)>
* Luis Ernesto Perafán Chacón <[noahverner1995](https://github.com/noahverner1995)>

## License

This project is licensed under the MIT License

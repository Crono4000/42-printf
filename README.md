*This project has been created as part of the 42 curriculum by afranco-*

## Description

This project is a implementation of a c function called ft_printf.
A function that lets you output on stdin various types of variables and in various ways.

## Instructions

### Requirements
- a c compiler
- makefile

### Usage

1. First, you should create and compile the libft library:
	```bash
	make
	```

2. Then you need to compile the program with the `libftprintf.a`:
	```bash
	cc program.c libftprintf.a
	```

### Example usage

1. Suppose you have a simple program `main.c`:
   ```c
   	#include "ft_printf.h"

	int main()
	{
		ft_printf("value: %d\n", 16);
	}
   ```

2. Compile it with the function files:
   ```bash
   cc program.c libftprintf.a -o program
   ```

3. Run it:
   ```bash
   ./program
   ```

## Explanation

The implementation parses the format string character by character. 
Regular characters are written directly to the standard output, while format specifiers introduced by % are delegated to specialized printing functions. 
Each conversion type is handled separately, ensuring the correct formatting of the provided argument. 
The function keeps track of the total number of printed characters and returns this value at the end, matching the behavior of the standard printf function.

### Supported Conversions

- %c Prints a single character.
- %s Prints a null-terminated string.
- %p Prints a memory address in hexadecimal format.
- %d Prints a signed decimal integer.
- %i Prints a signed integer in base 10.
- %u Prints an unsigned decimal integer.
- %x Prints an unsigned integer in lowercase hexadecimal format.
- %X Prints an unsigned integer in uppercase hexadecimal format.
- %% Prints the percent (%) character.

## Resources

### References

- Peer discussions

### IA usage

Large Language Models were used for:
- Understand concepts from c like stdarg functions.

### Tests

This project was tested using francinette.

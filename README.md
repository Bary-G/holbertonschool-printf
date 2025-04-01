NAME - _printf
SYNOPSIS - _printf("string %condition", variable)
DESCRIPTION - This command returns a string handling specifiers.
OPTIONS
%c - throws a character
%d - throws an integer
%s - throws a string
%% - throws '%' character
EXAMPLES
_printf("I am back, I am Bary");
_printf("If you prefer, Bary %c", 'R');
_printf("I spend like %d in this man page", 15);
_printf("I almost %s away on this", "passed");
FILES - README.md  _printf.c  _printf.c~  _putchar.c  _strlen.c  a.out  main.c  main.h  printint.c
BUGS
%d - can't take more than 1 int
AUTHORS - Bary, Murphy

---
title: _printf
---
```flowchart
	id0((_printf))
	id0 --> id1[/while string array is not NULL/]
	id1 --> id2{{character % ?}}
	id2 -- No --> id100
	id2 -- No --> id3[_putchar character]
	id3 -- No --> id4[Move to next character]
	id4 --> id1
	id2 -- Yes --> id2.1{{%c specifier ?}}
	id2.1 -- Yes --> id2.11[_putchar character]
	id2.11 --> id100
	id2.1 -- No --> id2.2{{%d specifier ?}}
	id2.2 -- Yes --> id2.21[Print number]
	id2.21 --> id200
	id2.2 -- No --> id2.3{{%s specifier ?}}
	id2.3 -- Yes --> id2.31[Print next string]
	id2.31 -- Recursion --> id0
	id2.3 -- No --> id2.4{{%% specifier ?}}
	id2.4 -- Yes --> id2.41[Print %]
	id2.4 -- No --> id2.5{{%% specifier ?}}
	id2.5 -- Yes --> id2.51[Print % character]
	id2.51 --> id200
	id2.5 --> id4

	id100((_putchar))
	id100 --> id101[Write character]

	id200((print_number_rec))
	id200 --> id201[/while number % 10 is higher than 10/]
	id201 --> id202[_putchar number]
	id202 --> id100
	id202 -- Recursion --> id200
```
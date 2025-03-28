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
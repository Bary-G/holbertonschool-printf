#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _strlen_recursion(char *s);
int _printf(const char *format, ...);
void print_numbers(void);
void print_most_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_rev(char *s);
void print_array(int *a, int n);
int _strlen(char *s);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_alphabet_x10(void);
void print_alphabet(void);
int print_last_digit(int);
void print_to_98(int n);
void _print_rev_recursion(char *s);
void print_array(int *a, int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_dog(struct dog *d);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_dog(struct dog *d);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
int (*get_op_func(char *s))(int, int);

#endif

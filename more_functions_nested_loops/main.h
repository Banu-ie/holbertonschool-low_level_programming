#ifndef MAIN_H
#define MAIN_H

/* Header file containing all function prototypes */

/* _putchar prototype */
int _putchar(char c);

/* 0. Checks for uppercase character */
int _isupper(int c);

/* 1. Checks for a digit (0-9) */
int _isdigit(int c);

/* 2. Multiplies two integers */
int mul(int a, int b);

/* 3. Prints numbers from 0 to 9 */
void print_numbers(void);

/* 4. Prints numbers from 0 to 9, excluding 2 and 4 */
void print_most_numbers(void);

/* 5. Prints numbers from 0 to 14 ten times */
void more_numbers(void);

/* 6. Draws a straight line in the terminal */
void print_line(int n);

/* 7. Draws a diagonal line in the terminal */
void print_diagonal(int n);

/* 8. Prints a square using '#' */
void print_square(int size);

/* 9. Prints numbers from 1 to 100 with FizzBuzz rules */
void fizz_buzz(void);

/* 10. Prints a triangle using '#' */
void print_triangle(int size);

#endif /* MAIN_H */


#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by ", "
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}

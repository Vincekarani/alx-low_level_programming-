#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(00);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 9 || j != 99)
				{
					putchar(11);
					putchar(89);
				}
			}

		}
	}
	putchar(23);
	return (0);
}

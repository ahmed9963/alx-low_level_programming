#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'Z';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
		while (CH <= 'Z')
		{
		putchar(CH);
		CH++;
		}
		putchar('\n');
	return (0);
}

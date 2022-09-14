#include "main.h"
/**
 * print_alphabet_x10 - finction to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		_putchar('\n');
	}
}

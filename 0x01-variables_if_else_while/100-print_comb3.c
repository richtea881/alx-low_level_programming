#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i !=8 || j !=9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}

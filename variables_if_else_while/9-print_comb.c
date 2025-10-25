#include <stdio.h>

/**
* main - patience
* Return: 0
*/

int main(void)
{
	short mk;

	for (mk = 0; mk <= 9;mk++ )
	{
		putchar(mk);
		if (mk + '0')
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

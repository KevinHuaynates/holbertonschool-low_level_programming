#include <stdio.h>
/**
*  main - Escribir del 1 al 9
* Description: Usanso Putchar
* Return:0
*/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
	putchar(num);
	num++;
	}
	putchar('\n');
	return (0);
}

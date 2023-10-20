#include <stdio.h>
/**
* main - Inprimir en base 16
* Description:Inprimir usando char y formato ASCII
* Return:0
*/

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
	putchar(num);
	}
	for (num = 97; num < 103; num++)
	{
	putchar(num);
	}
	putchar('\n');
	return (0);
}

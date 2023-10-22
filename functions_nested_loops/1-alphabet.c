#include "main.h"
/**
* print_alphabet- imprime el alfabeto
* main- es el archivo principa
* Description:Inprimir con putchar
* Return:0
*/
	void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
	{
	_putchar(c);
	}
	_putchar('\n');
}

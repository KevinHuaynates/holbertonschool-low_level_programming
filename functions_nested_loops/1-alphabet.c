#include "main.h"
/**
* print_alphabet- imprime el alfabeto
* main- es el archivo principal
* Description:Inprimir con putchar
* Return:0
*/
	void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";

	for (int i = 0; i < 27; i++)
	{
	_putchar(alphabet[i]);
	}
}
	int main(void)
	{
	print_alphabet();
	return (0);
	}

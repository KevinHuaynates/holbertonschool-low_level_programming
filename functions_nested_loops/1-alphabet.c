#include "main.h"
/**
* main -Inprimir _putchar
* Description:Inprimir con putchar
* Return:0
*/

int main(void);
int _putchar(char c);

void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
	for (int i = 0; i < 27; i++)
	{
	_putchar(alphabet[i]);
	}
}

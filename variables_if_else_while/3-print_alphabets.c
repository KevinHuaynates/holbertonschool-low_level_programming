#include <stdio.h>
/**
*  main -inprimir en mayusculas y minusculas
* Description:	Inprimir usando char 3 veces
* Return:0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}


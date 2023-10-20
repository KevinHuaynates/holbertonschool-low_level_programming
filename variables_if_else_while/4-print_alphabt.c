#include <stdio.h>
/**
*  main - Imprimir letra en minuscula
* Description: Excepto q y e
* Return:0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	}
	putchar('\n');
	return (0);
}

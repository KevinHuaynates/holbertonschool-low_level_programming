#include <stdio.h>
/**
*  main - Imprime el abecedario
* Description: Imprime el abecedario con char
* Return:0
*/

int main(void)

{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
		putchar('\n');
		return (0);
}

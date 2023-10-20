#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Imprime el ultimo digito
* Description: Muestra si el ultimo digito es <,> o = a 5
* Return:0
*/

int main(void)
{
		int n;
		int ultimo_digito;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				ultimo_digito = abs(n) % 10;
				printf("Last digit of %d is %d", n, ultimo_digito);
					if (ultimo_digito > 5)
					{
					printf(" and is greater than 5\n");
					}
					else if (ultimo_digito == 0)
					{
					printf(" and is 0\n");
					}
					else
					{
					printf(" and is less than 6 and not 0\n");
					}
				return (0);
}

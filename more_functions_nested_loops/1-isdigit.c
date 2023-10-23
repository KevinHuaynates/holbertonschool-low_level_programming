#include "main.h"
/**
* _isdigit - Es un digito?
* @c : Comprueba si va de 0 a 9
* Description: Programa que comprueba el digito
* Return: 1 , 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

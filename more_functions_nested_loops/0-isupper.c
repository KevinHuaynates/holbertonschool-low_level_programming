#include "main.h"
/**
* _isupper - revisa caracteres correctos
* @c: Revisa si los caracteres son correctos
*
* Description: Comprueba si los numeros son mayusculas
* Return: 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

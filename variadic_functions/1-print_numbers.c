#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  * print_numbers - imprime números, seguidos de una nueva línea
 *   * @separator: cadena que se imprimirá entre números
 *    * @n: número de enteros pasados a la función
 *     */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	    va_list args;
	        unsigned int i;
		    int num;

		        va_start(args, n);

			    for (i = 0; i < n; i++)
				        {
						        num = va_arg(args, int);
							        /* Imprime el número */
							        print_int(num);
								        /* Imprime el separador si no es NULL y no es el último número */
								        if (i != n - 1 && separator != NULL)
										            print_string(separator);
									    }

			        _putchar('\n');

				    va_end(args);
}

/**
 *  * print_int - imprime un entero
 *   * @n: el entero para imprimir
 *    */
void print_int(int n)
{
	    if (n < 0)
		        {
				        _putchar('-');
					        n = -n;
						    }
	        if (n / 10)
			        print_int(n / 10);
		    _putchar(n % 10 + '0');
}

/**
 *  * print_string - imprime una cadena
 *   * @s: la cadena para imprimir
 *    */
void print_string(const char *s)
{
	    while (*s)
		            _putchar(*s++);
}


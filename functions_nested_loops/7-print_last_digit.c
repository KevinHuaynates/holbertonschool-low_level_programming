#include "main.h"

int _abs(int n)
{
	    if (n < 0)
		        {
				        return (-n);
					    }
	        else
			    {
				            return (n);
					        }
}

int print_last_digit(int n)
{
	    int last_digit = _abs(n % 10);

	        _putchar('0' + last_digit);
		    return (last_digit);
}


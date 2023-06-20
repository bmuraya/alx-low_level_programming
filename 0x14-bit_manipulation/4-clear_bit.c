#include "main.h"

/**
*clear_bit - sets a bit at a position to 0
*@n: number to be used
*@index: position to be cleared
*
*Return: 1 on success, -1 on fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
<<<<<<< HEAD
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
=======
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);
*n &= ~(1 << index);
return (1);
>>>>>>> c51a431af1cfc1fc4449f08727e6c0f1a59556d5
}

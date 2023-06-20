#include "main.h"

/**
*set_bit - sets a bit at position to 1
*@n: number to be used
*@index: index to be set
*
*Return: 1 on success, -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
<<<<<<< HEAD
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
=======
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);
*n |= (1 << index);
return (1);
>>>>>>> c51a431af1cfc1fc4449f08727e6c0f1a59556d5
}


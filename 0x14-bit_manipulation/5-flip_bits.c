#include "main.h"

/**
<<<<<<< HEAD
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
=======
 * flip_bits - gets the number of bits to flip to get from n to m
 * @n: initial number
 * @m: final number
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flipped = n ^ m;
unsigned int count = 0;

while (flipped != 0)
{
if (flipped & 1)
count++;
flipped >>= 1;
}
return count;
}
>>>>>>> c51a431af1cfc1fc4449f08727e6c0f1a59556d5

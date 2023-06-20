#include "main.h"

/**
<<<<<<< HEAD
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);

=======
 * get_endianness - checks whether a machine is big endian or little endian
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
unsigned int test = 1;
char *endian = (char *)&test;
if (*endian)
return 1;
else
return 0;
>>>>>>> c51a431af1cfc1fc4449f08727e6c0f1a59556d5
}

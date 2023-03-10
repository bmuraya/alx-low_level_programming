#include <stdio.h>
#include "main.h"
/**
* program that prints its name
*f you rename the program, it will print the new name, without having to compile it again
*ou should not remove the path before the name of the program
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

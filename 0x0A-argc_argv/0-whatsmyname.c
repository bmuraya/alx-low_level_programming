#include <stdio.h>
/**
* program that prints its name
*f you rename the program, it will print the new name, without having to compile it again
*ou should not remove the path before the name of the program
*/

int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
return 0;
}

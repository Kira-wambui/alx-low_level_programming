#include <stdio.h>

/**
 * main - prints the suze of various types
 * return: O is for excited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of char: %d byte (s)\n", sizeof(char));
	printf("Size of an int: %d byte (s)\n", sizeof(int));
	printf("Size of a long int: %d byte (s)\n", sizeof(long int));
	printf("Size of a float: %d byte (s)\n", sizeof(float));
	return (0);
}

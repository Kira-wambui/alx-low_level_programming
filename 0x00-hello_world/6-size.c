#include <stdio.h>

/**
 * main - prints the suze of various types
 * return: O is for excited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of char: %d 1 byte (s)\n", sizeof(char));
	printf("Size of an int: %d 4 byte (s)\n", sizeof(int));
	printf("Size of a long int: %d 4 byte (s)\n", sizeof(long int));
	printf("Size of a long long int: %d 8 byte (s)\n", sizeof(long long int));
	printf("Size of a float: %d 4 byte (s)\n", sizeof(float));
	return (0);
}

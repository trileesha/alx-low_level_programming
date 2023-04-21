#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * Return: 0
*/

int main(void)

{
	printf("Size of a char: %zu byte(S)\n", sizeof(char));
	prinf("Size of an int: %zu byte(S)\n", sizeof(int));
	prinf("Size of a long int: %zu byte(S)\n", sizeof(long int));
	prinf("Size of a long long int: %zu byte(S)\n", sizeof(long long int));
	prinf("Size of a float: %zu byte(S)\n", sizeof(float));
	return (0);
}

#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by trileesha
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	prinf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	prinf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	prinf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	prinf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}

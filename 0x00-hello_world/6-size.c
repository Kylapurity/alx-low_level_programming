#include <stdio.h>
/**
 *main-Entrypoint
 *
 *Return: always 0
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
printf("Sizeofanint: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}



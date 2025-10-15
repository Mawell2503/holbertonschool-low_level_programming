#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main(void)
{
	printf("Size of char: %u bytes\n",sizeof(char));
	printf("Size of int: %u bytes\n",sizeof(int));
	printf("Size of long int: %u bytes\n",sizeof(long int));
	printf("Size of long long int: %u bytes\n",sizeof(long long int));
	printf("Size of float: %u bytes\n",sizeof(float));
	return (0);
}		

#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main(void)
{
	printf("the size of char: %u bytes\n",sizeof(char));
	printf("the size of int: %u bytes\n",sizeof(int));
	printf("the size of long int: %u bytes\n",sizeof(long int));
	printf("the size of long long int: %u bytes\n",sizeof(long long int));
	printf("the size of float: %u bytes\n",sizeof(float));
	return (0);
}		

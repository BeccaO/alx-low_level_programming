#include <stdlib.h>
#include <stdio.h>

/**
*main - Entry point to the program
*@argc: Arguement count
*@argv: Arguement vector
*Return: Error if two arguement are not passed
*/

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 2)
	{
	printf("Error\n");
	return(1);
	}
	else if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}

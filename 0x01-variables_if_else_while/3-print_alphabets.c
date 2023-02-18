#include <stdio.h>

/**
* main - Entry point
* Description: Program that print the alphabet in lowercase
* and then upper case, followed by a new line
* Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a',
	char de = 'A';

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}

for (de = 'A'; de <= 'Z'; de++)
{
	putchar(de);
}
	putchar('\n');

	return (0);
}

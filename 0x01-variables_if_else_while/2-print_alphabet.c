#include <stdio.h>

/**
* main - Entry point
* Desription: C program to demonstrate putchar() method
* Return: Always 0 (success)
*/
int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

#include"main.h"
#include <stdio.h>
/**
* main - prints a Fizz Buzz program
* Return: Always 0.
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if ((x % 3 == 0) && (x % 5 == 0))
{
printf("fizzbuzz");
}
else if ((x % 3 == 0) && (x % 5 != 0))
{
printf("Fizz");
}
else if ((x % 3 != 0) && (x % 5 == 0))
{
printf("buzz");
}
else
{
printf("%d", x);
}
if (x != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}

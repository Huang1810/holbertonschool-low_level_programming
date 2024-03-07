#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (succes)
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int n;
for (i = 0; s[i] != '\0'; i++)
{ 
for (n = 0; s[n] != accept[n]; n++)
{
if (accept [n] == '\0')
return (i);
}
}
return (0);
}


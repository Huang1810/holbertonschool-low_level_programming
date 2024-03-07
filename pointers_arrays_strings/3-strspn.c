#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (succes)
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int n;
while (*s)
{ 
for (n = 0; accept[n]; n++)
{
if (*s == accept[n])
{
i++;
break;
}
if (accept [n + 1] == '\0')
return (i);
}
s++;
}
return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Description: locates a character in a string.
 * Return: Always 0 (succes)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}

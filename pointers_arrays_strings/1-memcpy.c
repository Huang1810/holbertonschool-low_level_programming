#include "main.h"

/**
 * _memset - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Description: copies memory area.
 * Return: Always 0 (succes)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}

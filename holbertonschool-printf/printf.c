#include <stdarg.h>
#include <stdio.h>
int custom_printf(const char *format, ...) {
va_list args;
int count = 0;
char c;
va_start(args, format);
while ((c = *format++) != '\0')
{
if (c == '%')
{
// Handle conversion specifiers
switch (*format++)
{
case 'c':
{
// Print a character
char character = va_arg(args, int);
putchar(character);
count++;
break;
}
case 's':
{
// Print a string
const char *str = va_arg(args, const char *);
while (*str != '\0')
{
putchar(*str++);
count++;
}
break;
}
case '%':
{
// Print a literal '%'
putchar('%');
count++;
break;
}
default:
// Ignore unsupported conversion specifiers
break;
}
}
else
{
// Print non-format characters
putchar(c);
count++;
}
}
va_end(args);
return count;
}
int main()
{
    custom_printf("Hello, %s! My favorite character is %c and I have %d%% chance of winning.\n","world", 'A', 80);
return 0;
}

#include <stdio.h>

/**
 *main - outputs 00 to 99 with comma and space.
 *Return: Always 0
 */
int main(void)
{
int n, k;
for (n = 0; n < 10; n = n + 1)
{
for (k = 0; k < 10;  k = k + 1)
{
if (n < k)
{
putchar(n + 48);
putchar(k + 48);
if (n * k != 72)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}

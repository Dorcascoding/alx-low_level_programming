#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
int ch1, ch2;
for (ch1 = 48; ch1 <= 56; ch1++)
{
for (ch2 = 49; ch2 <= 57; ch2++)
{
putchar(ch1);
putchar(ch2);
if (ch1 != 56 && ch2 != 57)
{
putchar(' ');
putchar(',');
}
}
}
putchar('\n');
return (0);
}

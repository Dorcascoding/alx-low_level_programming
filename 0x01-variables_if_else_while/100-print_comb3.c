#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
int ch1, ch2;
for (ch1 = 48; ch1 <= 58; ch1++)
{
for (ch2 = 49; ch2 <= 59; ch2++)
{
putchar(ch1);
putchar(ch2);
if (ch1 != 58 && ch2 != 59)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}

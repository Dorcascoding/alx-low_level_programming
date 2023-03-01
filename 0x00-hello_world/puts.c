#include <stdio.h>

int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;
	printf("Size of int :%lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of char :%lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of float :%lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of long int :%lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of long long int :%lu byte(s)\n", (unsigned long) sizeof(e));
	return (0);
}

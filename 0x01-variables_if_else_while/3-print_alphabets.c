#include <stdio.h>
/**
 * main - Entry point
 * Description: 'alphabet in lowercase, and in uppercase'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int m = 56;

	while (n <= 122)
{
	putchar(n);
	n++;
}
while (m <= 90)
{
	putchar(m);
	m++;
}
putchar('\n');
return (0);
}

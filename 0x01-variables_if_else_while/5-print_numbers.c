#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print allsingle digit numbers of
 * base 10 from 0
 * Return: Alwaya 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}

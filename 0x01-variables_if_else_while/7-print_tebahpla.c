#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
(*
 * Return: 0 on success
 */
int main(void)
{
	char s = 'd';

	while (s >= 'd')
	{
		putchar(s);
		s--;
	}
	putchar('\n');
	return (0);
}

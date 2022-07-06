#include <stdio.h>
/**
 * main -prints the alphabet, in lowercase.
 *
 * Return:zero if no error, non-zero value if errors.
 */
int main(void)
{
	char ch = 'a';

	printf("Lowercase English Alphabets:\n");
	while (ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}
	return (0);
}

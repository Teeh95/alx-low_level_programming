#include <stdio.h>
/**
 * main -adds two integers and returns the result
 *
 * Return:zero
 */
int main(void)
{
	int a, b;

	printf("Enter two interger numbers\n");
	scanf("%d%d", &a, &b);

	printf("%d + %d = %d\n", a, b, add(a, b));

	return (0);
}

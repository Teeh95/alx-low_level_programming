#include <stdio.h>
/**
 * main -function that computes the absolute value of an integer.
 *
 * Return:always zero (success)
 */
int main(void)
{
	int num;

	printf("Enter Number to find Absolute Value =\n");
	scanf("%d", &num);

	int abNum = abs(num);

	printf("\nActual Number   = %d", num);
	printf("\nAbsolute Number = %d\n", abNum);

	return (0);
}

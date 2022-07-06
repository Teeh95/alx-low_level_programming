#include <stdio.h>
/**
 * main -last digit of the number.
 *
 * Return:zero
 */
int main(void)
{
	int Number, LastDigit;

	printf("Please Enter any Number that you wish\n");
	scanf("%d", &Number);

	LastDigit = Number % 10;

	printf(" \n The Last Digit of a Given Number %d =  %d", Number, LastDigit);

	return (0);
}

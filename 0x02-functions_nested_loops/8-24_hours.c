#include <stdio.h>
/**
 * main -print every minutes of the dat.
 *
 * Return: zero 
 */
int main(void)
{
	time_t tm;
	
	time(&tm);
	printf("Every minutes of the day/Time = %s\n", ctime(&tm));
	getch(23);

	return (0);
}

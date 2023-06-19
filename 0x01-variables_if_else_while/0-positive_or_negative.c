Skip to content
Sign up
This repository has been archived by the owner on Apr 27, 2023. It is now read-only.
m-gsani
/
alx-low_level_programming
Public archive
Code
Issues
Pull requests
Actions
Projects
More
alx-low_level_programming/0x01-variables_if_else_while/0-positive_or_negative.c
@m-gsani
m-gsani Updated task 0
 History
 1 contributor
30 lines (27 sloc)  422 Bytes
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description:'the program prints either postive,negative or zero'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

<<<<<<< HEAD
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
=======
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
>>>>>>> daa6deab0e4fe8b16cda86d6542414c61e15c1e0
}

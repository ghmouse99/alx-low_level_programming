#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - print random number
 *
 * Return: 0
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > o)
						printf("%d is positive\n ,n");
					else if (n < o)
						printf("%d is negative\n , n");
					else
						print("%d is zero");

					return (0);

}

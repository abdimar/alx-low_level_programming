#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random  num
 *
 * Return: 0
 */

int main(void)

{

		int n;
                int x;
i
	
	       	srand(time(0));
	       	n = rand() - RAND_MAX / 2;
                printf("Last digit of %d is",  n,);
		x = % (10);
                if (x > 5)
	       	{
	       	        printf("%d and is greater than 5\n", x);
		}
		else if ((x < 6) && (x < 0))
		{
			printf("%d and is less thsn 6 and not 0\n" x);
		}
		else
			printf("%d and is 0\n", x);
                }
		return (0);
}

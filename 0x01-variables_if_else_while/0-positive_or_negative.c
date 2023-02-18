#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* headers goes there */

/* betty style doc files  function goes there */
/**
 * main - Entery point
 *
 * Return: Always 0(suceess)
 *
 */
int main(void)
{
         int n;


	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	 /* your code goes in here*/
	 if (n > 0);
	 {
		 printf("%\d is positive\n", n);
	 }
	else if (n < 0);
	{
		printf("%\d is negative\n", n);
	}
	else
	{       
		printf("%\d is zero\n"' n);
	}
	return (0);
}

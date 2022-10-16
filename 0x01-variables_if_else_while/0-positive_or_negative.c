#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		printf("n is: %i \n");

		/* check my if conditions below */
		if(n == 0)
			printf("my %i is zero\n");
		else if(n < 0)
		        printf	

		return (0);

}

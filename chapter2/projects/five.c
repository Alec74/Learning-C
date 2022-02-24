/**/
#include <stdio.h>

int main(void)
{
	float x;
	
	printf("Enter a value of x (3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6): ");
	scanf("%f", &x);

	printf("The answer to the polynomial is: %.2f\n", 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6);

	return 0;
}

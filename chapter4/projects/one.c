/* Reverse two digits input by user */
#include <stdio.h>

int main(void)
{
	int n1, n2;
	printf("Enter a two digit number: ");
	scanf("%2d", &n1);

	n2 = n1 % 10;
	n1 = n1 / 10;	

	printf("The reversal is: %d%d\n", n2, n1);

	return 0;
}

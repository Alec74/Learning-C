/* (4.03) Reverse three digits input by user */
#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);

	printf("The reversal is: %d%d%d\n", n3, n2, n1);

	return 0;
}

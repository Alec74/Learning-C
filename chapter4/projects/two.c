/* Reverse two digits input by user */
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, store;
	printf("Enter a three digit number: ");
	scanf("%3d", &store);

	n1 = store / 100;
	n2 = store % 100 / 10;
	n3 = store % 10;

	printf("The reversal is: %d%d%d\n", n3, n2, n1);

	return 0;
}

/* Convert to octal (base 8) */
#include <stdio.h>

int main(void)
{
	int n1, d1, d2, d3, d4, d5;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n1);

	d5 = n1 % 8;
	d4 = n1 / 8 % 8;
	d3 = n1 / 8 / 8 % 8;
	d2 = n1 / 8 / 8 / 8 % 8;
	d1 = n1 / 8 / 8 / 8 / 8 % 8;

	printf("In octal, your number is: %1d%1d%1d%1d%1d\n", d1, d2, d3, d4, d5);

	return 0;
}

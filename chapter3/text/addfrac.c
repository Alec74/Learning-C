/* Adds two fractions */
#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, resultNum, resultDenom;

	printf("Enter the first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	printf("Enter the second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	resultNum = num1 * denom2 + num2 * denom1;
	resultDenom = denom1 * denom2;
	printf("The sum is %d/%d\n", resultNum, resultDenom);

	return 0;
}

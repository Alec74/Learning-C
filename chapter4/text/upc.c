/* Computing a UPC Check Digit */
#include <stdio.h>

int main(void)
{
	int a, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &a);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1,&j2,&j3,&j4,&j5);
	
	firstSum = a + i2 + i4 + j1 + j3 + j5;
	secondSum = i1 + i3 + i5 + j2 + j4;
	total = 3 * firstSum + secondSum;
	
	printf("Check digit: %d\n", (10 - (total % 10)) % 10);

	return 0;
}

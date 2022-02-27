/* Modify upc.c from section 4.1 to instead check whether the UPC is valid or invalid */
#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, firstSum, secondSum, total;

	printf("Enter a complete UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
	
	firstSum = i1 + i3 + i5 + i7 + i9 + i11;
	secondSum = i2 + i4 + i6 + i8 + i10;
	total = 3 * firstSum + secondSum;
	
	if (i12 == 9 - ((total - 1) % 10)){
		printf("VALID\n");
	} else {
		printf("INVALID\n");
	}

	return 0;
}

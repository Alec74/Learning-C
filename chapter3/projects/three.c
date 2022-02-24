#include <stdio.h>

int main(void)
{
	int gs1, gId, pCode, itemN, checkD;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &gId, &pCode, &itemN, &checkD);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", gId);
	printf("Publisher code: %d\n", pCode);
	printf("Item number: %d\n", itemN);
	printf("Check digit: %d\n", checkD);

	return 0;
}

#include <stdio.h>

int main(void)
{
	float x, y;
	int i;

	printf("Enter: ");
	scanf("%f%d%f", &x, &i, &y);
	printf("Captured: \n%f\t%d\t%f\n", x, i, y);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	printf("Enter input: ");
	scanf("%d%f%d", &i, &x, &j);
	printf("The following was captured: \n%d\t%f\t%d\n", i, x, j);

	return 0;
}

/**/
#include <stdio.h>

int main(void)
{
	int i, j;
	float x, y;

	printf("Enter 2 integers and 2 floating-point values:\n");
	scanf("%d%d%f%f", &i, &j, &x, &y);
	printf("The following values were captured: \n%d\t%d\t%f\t%f\n", i, j, x, y);

	return 0;
}

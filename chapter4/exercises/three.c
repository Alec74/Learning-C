#include <stdio.h>

int main(void)
{
	int x, y, result;
	printf("Enter division (x/y): ");
	scanf("%d/%d", &x, &y);
	result = x / y;
	
	printf("The computed answer is: %d\n", result);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int i, j;
	printf("Enter i value (i): ");
	scanf("%d", &i);

	j = (i = 6) + (j = 3);

	printf("%d %d\n", i, j);

	return 0;
}

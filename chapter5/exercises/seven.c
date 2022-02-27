/* Testing 5.07 exercise */

#include <stdio.h>

int main(void)
{
	int i;
	
	printf("Enter i value: ");
	scanf("%d", &i);

	printf("%d\n", i >= 0 ? i : -i);

	return 0;
}

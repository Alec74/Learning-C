#include <stdio.h>

int main(void)
{
	int i, j, k;
	i = j = k = 1;
	i += j += k;

	printf("%d %d %d\n", i, j, k);

	return 0;
}

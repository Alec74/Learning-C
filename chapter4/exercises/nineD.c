#include <stdio.h>

int main(void)
{
	int i = 2, j = 1, k = 0;
	i *= j *= k;

	printf("%d %d %d\n", i, j, k);

	return 0;
}

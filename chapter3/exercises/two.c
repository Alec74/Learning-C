/* Chapter 3 exercise 2 */
#include <stdio.h>

int main(void)
{
	float x = 3.14159265358979323846264338;

	printf("%-8.1e\n", x); // (a)
	printf("%10.6e\n", x); // (b)
	printf("%-8.3f\n", x); // (c)
	printf("%6.0f\n", x); // (d)

	return 0;
}

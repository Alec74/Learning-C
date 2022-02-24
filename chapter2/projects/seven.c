/**/
#include <stdio.h>

int main(void)
{
	int amount, a20, a10, a5, a1;
	printf("Please ente a US Dollar amount: ");
	scanf("%i", &amount);

	a20 = amount / 20;
	amount = amount - (a20 * 20);
	a10 = amount / 10;
	amount = amount - (a10 * 10);
	a5 = amount / 5;
	amount = amount - (a5 * 5);
	a1 = amount / 1;

	printf("$20 bills: %i\n$10 bills: %i\n$5 bills: %i\n$1 bills: %i\n", a20, a10, a5, a1);

	return 0;
}

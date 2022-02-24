/* Formats product information entered by user */
#include <stdio.h>

int main(void)
{
	int itemN, m, d, y;
	float price;

	printf("Enter item number: ");
	scanf("%d", &itemN);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2f\t\t%d/%d/%d\n", itemN, price, m, d, y);

	return 0;
}

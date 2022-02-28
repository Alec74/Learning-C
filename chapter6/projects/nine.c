/* (Project 6.09) */
#include <stdio.h>

int main(void)
{
	float amount, interest, monthlyPay, monthlyRate, month, month1, month2, month3;
	int bal;
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPay);
	printf("Enter amount of payments: ");
	scanf("%d", &bal);

	monthlyRate = ((interest / 100) / 12) + 1;
	month = amount;

	for (int i = 1; i <= bal; i++){
		month = (month * monthlyRate) - monthlyPay;
		printf("Balance remaining after payment #%d: %.2f\n", i, month);
	}

	return 0;
}

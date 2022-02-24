/**/
#include <stdio.h>

int main(void)
{
	float amount, interest, monthlyPay, monthlyRate, month1, month2, month3;
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPay);
	
	monthlyRate = ((interest / 100) / 12) + 1;
	month1 = (amount * monthlyRate) - monthlyPay;
	month2 = (month1 * monthlyRate) - monthlyPay;
	month3 = (month2 * monthlyRate) - monthlyPay; 

	printf("Balance remaining after first payment: %.2f\nBalance remaining after second payment: %.2f\nBalance remaining after third payment: %.2f\n", month1, month2, month3);

	return 0;
}

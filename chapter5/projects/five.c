/* Project 5.05 */
/* Write a program that asks the user to enter the amount of taxable income, then displays the corresponding tax due. */

#include <stdio.h>

int main(void)
{
	float taxI;
	printf("Enter amount of taxable income: ");
	scanf("%f", &taxI);

//	printf("You entered: %f\n", taxI);
	
	if (taxI < 750.0f && taxI > 0.0f){
		printf("Amount of tax due: %.2f\n", .01f * taxI);
	} else if (taxI < 2250.0f && taxI >= 750.0f){
		printf("Amount of tax due: %.2f\n", 7.50f + (.02f * (taxI - 750.0f)));
	} else if (taxI < 3750.0f && taxI >= 2250.0f){	
		printf("Amount of tax due: %.2f\n", 37.50f + (.03f * (taxI - 2250.0f)));
	} else if (taxI < 5250.0f && taxI >= 3750.0f){
		printf("Amount of tax due: %.2f\n", 82.50f + (.04f * (taxI - 3750.0f)));
	} else if (taxI < 7000.0f && taxI >= 5250.0f){
		printf("Amount of tax due: %.2f\n", 142.50f + (.05f * (taxI - 5250.0f)));
	} else if (taxI >= 7000.0f){
		printf("Amount of tax due: %.2f\n", 230.00f + (.06f * (taxI - 7000.0f)));
	} else {	
		printf("Invalid input\n");
	}

	return 0;
}

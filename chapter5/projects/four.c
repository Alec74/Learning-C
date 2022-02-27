/* Project 5.04 */
/* Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description */

#include <stdio.h>

int main(void)
{
	int windSpeed;
	printf("Enter a wind speed (in knots): ");
	scanf("%d", &windSpeed);

	if (windSpeed < 1){
		printf("Description: Calm\n");
	} else if (windSpeed <= 3 && windSpeed >= 1){
		printf("Description: Light air\n");
	} else if (windSpeed <= 27 && windSpeed >= 4){
		printf("Description: Breeze\n");
	} else if (windSpeed <= 47 && windSpeed >= 28){
		printf("Description: Gale\n");
	} else if (windSpeed <= 63 && windSpeed >= 48){
		printf("Description: Storm\n");
	} else if (windSpeed >= 64){
		printf("Description: Hurricane\n");
	} else{
		printf("Invalid input\n");
	}

	return 0;
}

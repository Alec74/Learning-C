/* Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar (Project 5.09) */
#include <stdio.h>

int main(void)
{
	int dd1, dm1, dy1, dd2, dm2, dy2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &dm1, &dd1, &dy1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &dm2, &dd2, &dy2);

	if (dy1 < dy2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", dm1, dd1, dy1, dm2, dd2, dy2);
	} else if (dy2 < dy1){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", dm2, dd2, dy2, dm1, dd1, dy1);
	} else if (dy1 == dy2) {
		if (dm1 < dm2){
			printf("%d/%d/%d is earlier than %d/%d/%d\n", dm1, dd1, dy1, dm2, dd2, dy2);
		} else if (dm2 < dm1) {	
			printf("%d/%d/%d is earlier than %d/%d/%d\n", dm2, dd2, dy2, dm1, dd1, dy1);
		} else if (dm1 == dm2) {
			if (dd1 < dd2){
				printf("%d/%d/%d is earlier than %d/%d/%d\n", dm1, dd1, dy1, dm2, dd2, dy2);
			} else if (dd2 < dd1) {
				printf("%d/%d/%d is earlier than %d/%d/%d\n", dm2, dd2, dy2, dm1, dd1, dy1);
			} else{
				printf("The dates are the same.\n");
			}
		}
	}

	return 0;
}

/* (Project 6.10) Write a program that prompts the user to enter many dates and then indicates which date comes earlier on the calendar */
#include <stdio.h>

int main(void)
{
	int dd1, dm1, dy1, dd2, dm2, dy2;

	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d", &dm1, &dd1, &dy1);

	for(;;){
		printf("Enter date (mm/dd/yy): ");
		scanf("%d/%d/%d", &dm2, &dd2, &dy2);
		if (dm2 == 0 && dd2 == 0 && dy2 == 0){
			printf("%2d/%2d/%.2d is the earliest date\n", dm1, dd1, dy1);
			break;
		}
		if (dy2 < dy1){
			dy1 = dy2; dm1 = dm2; dd1 = dd2;
		} else if (dy2 == dy1){
			if (dm2 < dm1){
				dy1 = dy2; dm1 = dm2; dd1 = dd2;
			} else if (dm2 == dm1){
				if (dd2 < dd1){
					dy1 = dy2; dm1 = dm2; dd1 = dd2;
				}
			}
		}
	}

	return 0;
}

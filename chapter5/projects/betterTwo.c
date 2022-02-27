/*Project 5.02 */
/* Write a program that asks the user for a 24 hour time and then displays it in 12-hour form */

#include <stdio.h>

int main(void)
{
	int hour, min;
	printf("Enter a 24-hour time (hh:mm): ");
	scanf("%d:%2d", &hour, &min);

	if (hour < 11){
		printf("Equivalent 12-hour time: %d:%.2d am\n", 
			hour == 0 ? 12 : hour, min);
	} else {
		printf("Equivalent 12-hour time: %d:%.2d pm\n",
			hour == 12 ? 12 : hour - 12, min);
	}

	return 0;
}

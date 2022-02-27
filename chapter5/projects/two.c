/*Project 5.02 */
/* Write a program that asks the user for a 24 hour time and then displays it in 12-hour form */

#include <stdio.h>

int main(void)
{
	int hour, min, noon;
	printf("Enter a 24-hour time (hh:mm): ");
	scanf("%d:%2d", &hour, &min);

	noon = hour <= 12 && hour >= 0;

	switch (hour) {
		case 0: printf("Equivalent 12-hour time: %d:%.2d am\n", hour+12, min); break;
		case 1: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 2: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 3: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 4: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 5: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 6: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 7: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 8: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 9: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 10: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 11: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 12: printf("Equivalent 12-hour time: %d:%.2d am\n", hour, min); break;
		case 13: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 14: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 15: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 16: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 17: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 18: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 19: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 20: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 21: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 22: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 23: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
		case 24: printf("Equivalent 12-hour time: %d:%.2d pm\n", hour-12, min); break;
	}

	return 0;
}

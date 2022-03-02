/* Print 24 hour time from 12 hour input (Project 7.09) */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hh, mm, user, test1, test2;

	printf("Enter a time (12-hour format): ");
	scanf("%d:%d", &hh, &mm);
	test1 = getchar();
	test2 = getchar();
	
	if (toupper(test1) == 'P' || toupper(test2) == 'P'){
		hh+=12;
	}

	printf("Equivalent 24-hour time: %d:%.2d\n", hh, mm);

	return 0;
}

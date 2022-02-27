/* Convert numerical grade to a letter grade (Project 5.10) */
#include <stdio.h>

int main(void)
{
	int grade, d1, d2;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	d1 = grade / 10;
	d2 = grade % 10;

	if (grade < 0){
		d1 = 900;
	}

	switch (d1) {
		case 0: case 1: case 2: case 3: case 4: case 5:
			printf("Letter grade: F\n"); break;
		case 6: 
			printf("Letter grade: D\n"); break;
		case 7:
			printf("Letter grade: C\n"); break;
		case 8:
			printf("Letter grade: B\n"); break;
		case 9: case 10:
			printf("Letter grade: A\n"); break;
		default:
			printf("Invalid\n"); break;
	}

	return 0;
}

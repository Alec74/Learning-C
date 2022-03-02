/* Find closest flight time (Project 7.08) */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hh, mm, user, f1, f2, f3, f4, f5, f6, f7, f8, test1, test2;

	printf("Enter flight time (12-hour format): ");
	scanf("%d:%d", &hh, &mm);
	test1 = getchar();
	test2 = getchar();
	
	if (toupper(test1) == 'P' || toupper(test2) == 'P'){
		hh+=12;
	}

	user = (hh * 60) + mm;
	f1 = 8 * 60;
	f2 = 9 * 60 + 43;
	f3 = 11 * 60 + 19;
	f4 = 12 * 60 + 47;
	f5 = 14 * 60;
	f6 = 15 * 60 + 45;
	f7 = 19 * 60;
	f8 = 21 * 60 + 45;

	if (user <= f1 + ((f2 - f1) / 2)){
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	} else if (user <= f2 + (( f3 - f2) / 2) && user >= f2 - (f2 - f1) / 2){	
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	} else if (user <= f3 + (( f4 - f3) / 2) && user >= f3 - (f3 - f2) / 2){	
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	} else if (user <= f4 + (( f5 - f4) / 2) && user >= f4 - (f4 - f3) / 2){	
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	} else if (user <= f5 + (( f6 - f5) / 2) && user >= f5 - (f5 - f4) / 2){	
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	} else if (user <= f6 + (( f7 - f6) / 2) && user >= f6 - (f6 - f5) / 2){	
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	} else if (user <= f7 + (( f8 - f7) / 2) && user >= f7 - (f7 - f6) / 2){	
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	} else if (user >= f8 - (f8 - f7) / 2){	
		printf("Closest departure time (final flight of the day) is 9:45 p.m., arriving at 11:58 p.m.\n");
	} else {
		printf("Invalid input\n");
	}

	return 0;
}

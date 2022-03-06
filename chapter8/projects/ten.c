/* Find closest flight time (Project 5.08) */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int hh, mm, user, f1, f2, f3, f4, f5, f6, f7, f8, a, b, c, d;

	printf("Enter flight time (24-hour format): ");
	scanf("%d:%d", &hh, &mm);

	user = (hh * 60) + mm;
	f1 = 8 * 60;
	f2 = 9 * 60 + 43;
	f3 = 11 * 60 + 19;
	f4 = 12 * 60 + 47;
	f5 = 14 * 60;
	f6 = 15 * 60 + 45;
	f7 = 19 * 60;
	f8 = 21 * 60 + 45;
	
	int dTimes[8] = { f1, f2, f3, f4, f5, f6, f7, f8 },
		aTimes[8] = { (10*60)+16, (11*60)+52, (13*60)+31, (15*60), (16*60)+8, (17*60)+55, (21*60)+20 };

	for (int i = 0; i < 8; i++){
		a = dTimes[i];
		b = dTimes[i-1];
		if ((fabs(user - a)) < (fabs(user - b))){
			c = a;
			d = i;
		}else{
			;
		}
	}

	printf("Closest departure time is %d:%.2d, arriving at %d:%.2d\n", dTimes[d] / 60, dTimes[d] % 60, aTimes[d] / 60, aTimes[d] % 60);

	return 0;
}

/*
Write a program that computes the volume of a sphere with a 10-meter radius using the formula v=4/3(3.14159265)r^3
*/
#include <stdio.h>

int main(void)
{
	int radius = 10;
	float pie = 3.14159265f;
	
	printf("The volume of a sphere with 10-meter radius: %.1f\n", (4.0f / 3.0f) * pie * (radius * radius *radius));

	return 0;
}

/*
Output with 3/4: 3141.6
Output with 3.0f / 4.0f: 4188.8 
*/

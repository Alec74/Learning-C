/**/
#include <stdio.h>

int main(void)
{	
	float radius;
	printf("Enter the radius of sphere: ");
	scanf("%f", &radius);

	float pie = 3.14159265f;

	
	printf("The volume of a sphere with %.1f-meter radius: %.1f\n", radius, (4.0f / 3.0f) * pie * (radius * radius *radius));

	return 0;
}

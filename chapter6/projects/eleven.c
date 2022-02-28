/* (Project 6.11) */
#include <stdio.h>

int main(void)
{
	int n;
    float e = 1.0f, j;

    printf("Enter a value for n (solving for e): ");
    scanf("%d", &n);

    j = n;
    for(int i = 1; i <= n; i++, j--){
        e = e + (1/j);
    }

    printf("e: %f \n", e);

	return 0;
}

/* (Project 7.15) Compute a factorial of positive integer */

#include <stdio.h>

int main(void)
{
    long double x, prod=1;

    printf("Enter a positive number: ");
    scanf("%llf", &x);

    for(long double i = x;i > 0.0;i--){
        prod*=i;
    }

    printf("Factorial of %.0llf: \n%.0llf\n", x, prod);

    return 0;
}

/***********************
 * Last accurate value printed
 * (a) (short) 7
 * (b) (int) 12
 * (c) (long) 20
 * (d) (long long) 20
 * (e) (float) 13 Precision fails to be accurate after
 * (f) (double) 22 Precision fails to be accurate after
 * (g) (long double) 37 Precision fails to be accurate after
 ***********************/
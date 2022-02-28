/* (Project 6.02) Write a program that asks user for two integers then calculates and displays their greatest common divisor (GCD) */

#include <stdio.h>

int main(void)
{
    int m, n, r;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    // Euclids algorith
    for (; n != 0;){
        r = m % n;
        m = n;
        n = r;
    }
    printf("Greatest common divisor: %d\n", m);
    
    return 0;
}
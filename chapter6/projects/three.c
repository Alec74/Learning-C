/* (Project 6.02) Write a program that asks user for a fraction, then reduces it to lowerst terms */

#include <stdio.h>

int main(void)
{
    int m, n, r, gcd, n2, m2;

    printf("Enter a fraction (x/y): ");
    scanf("%d/%d", &n, &m);

    n2 = n;
    m2 = m;

    // Euclids algorith
    for (; n != 0;){
        r = m % n;
        m = n;
        n = r;
    }
    
    gcd = m;
    printf("In lowest terms: %d/%d\n", n2 / gcd, m2 / gcd);
    
    return 0;
}
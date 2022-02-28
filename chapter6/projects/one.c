/* (Project 6.01) Program to find largest in series of numbers entered by user */

#include <stdio.h>

int main(void)
{
    float n, largest = 0;

    for(;;){
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > 0.0f){
            if (n > largest){
                largest = n;
            }
        } else{
            printf("The largest number entered was %g\n", largest);
            return 0;
        }
    }
}
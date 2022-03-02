/* (Project 7.14) Using Newtons method to compute square root of a number */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    double sqrt, x, y1, y = 0, y2, avg, diff;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y1 = 1;
    avg = ((y1) + (x / y1)) / 2; //y = 1
    y2 = avg;

    for(;;){
        y = y2; //old y set
        avg = ((y2) + (x / y2)) / 2; //y is guessed
        y2 = avg; //new y guessed
        diff = y - y2; // find the difference
        diff = fabs(diff);
        if (diff < 0.00001 * y){ //degree of accuracy
            break;
        }
    }
    

    printf("Square root: %lf\n", y2);

    return 0;
}
/* Text program chapter 8 reverse.c */
// Reverses a series of numbers

#include <stdio.h>

#define N 10
#define l (int) (sizeof(a) / sizeof(a[0]))

int main(void){
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < l; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = l - 1; i >= 0; i--){
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
/* (6.06) Prints a table of even squares using a for statement */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            printf("%10d%10d\n", i, i * i);
        }
    }

    return 0;
}
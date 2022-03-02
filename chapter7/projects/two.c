/* (Project 7.02) Prints a table of squares using a for statement. Halts every 24 to check for continue*/

#include <stdio.h>

int main(void)
{
    long i, n;
    char a, c;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    c = getchar();

    for (i = 1; i <= n; i++){
        if (i % 24 == 0){
            printf("Press enter to continue (esc to exit)...");
            while (a = getchar() != '\n');
        } else {
            printf("%10ld\t%10ld\n", i, i * i);
        }
    }

    return 0;
}

/*
Maximum values (Running on a raspberry pi 4 Model B (64-bit)):
short int: 32767 (16-bits used for storage) = 2^15 + leftmost bit used for sign and remains 0
int: 2,147,483,647 (32-bits used for storage) = 2^31 + leftmost bit used for sign and remains 0
long int: 9,223,372,036,854,775,807 (64 bits used for storage) = 2^63 + leftmost bit used for sign and remains 0
*/
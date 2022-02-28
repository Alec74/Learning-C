/* (6.08) Prints calendar from starting day */

#include <stdio.h>

int main(void)
{
    int days, week;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week);
    week -= 1;
    if (week > 0){
        for (int val = week; val > 0; val--){
            printf("    ");
        }
    }

    for (int i = 1; i <= days; i++, week++){
        if (week % 7 == 0){
            printf("\n");
        }
        printf("%4d", i);
    }
    printf("\n");

    return 0;
}
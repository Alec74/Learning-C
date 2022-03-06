/* Text program chapter 8 repdigit.c */
// Check for repeat digits in a number

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            printf("Repeated digit(s)");
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
    {
        while (n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
            {
                printf(" %d ", digit);
            }
            digit_seen[digit] = true;
            n /= 10;
        }
    }
    else
    {
        printf("No repeated digit");
    }
    printf("\n");

    return 0;
}
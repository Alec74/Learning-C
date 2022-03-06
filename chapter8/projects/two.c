/* Text program chapter 8 repdigit.c */
// Check for repeat digits in a number

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit, shown[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, test[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Digit: \t\t");
    for (int i = 0; i < 10; i++){
        printf("%d    ", shown[i]);
    }
    printf("\n");

    while (n > 0)
    {
        digit = n % 10;
        test[digit]++;
        digit_seen[digit] = true;
        n /= 10;
    }


    printf("Occurences: \t");
    for (int j = 0; j < 10; j++){
        printf("%d    ", test[j]);
    }
    printf("\n");

    return 0;
}
/* (Project 6.05) Reverse multi-digit input by user */
#include <stdio.h>

int main(void)
{
	int n1, num;
	printf("Enter a multi-digit number: ");
	scanf("%d", &n1);
    
    printf("The reversal is: ");
    do {
        num = n1;
        n1 /= 10;
        num %= 10;
        printf("%d", num);
    } while (n1 != 0);

    printf("\n");

	return 0;
}

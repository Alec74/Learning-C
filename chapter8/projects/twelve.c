/* (Project 7.05) Scrabble word value */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    float val = 0.0f, let[26] = 
    {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    printf("Enter a scrabble word: ");
    while ((a = getchar()) != '\n'){
        a = toupper(a);
        val += let[a-65];
        
    }
    printf("Scrabble value: %.0f\n", val);

    return 0;
}
/* (Project 7.10) Count vowels in a word */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    int val = 0;

    printf("Enter a sentance: ");
    while ((a = getchar()) != '\n'){

        switch (toupper(a)){
            case 'A': case 'E': case 'I': case 'O': case 'U': //AEIOU +1
                val++;
                break;
            default:
                break;
        }
        
    }
    printf("Vowel count: %d\n", val);

    return 0;
}
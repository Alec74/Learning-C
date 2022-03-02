/* (Project 7.13) Calculate average word length */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    int sum = 1, words, val=0;
    float avg;

    printf("Enter a sentance: ");
    while ((a = getchar()) != '\n'){
        if (a != ' '){
            words++;
        }else{
            sum++;
            val+=words;
            words=0;
        }
    }

    val+=words;
    avg = (float) val / (float) sum;

    printf("Average word length: %.1f\n", avg);

    return 0;
}
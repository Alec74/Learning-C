#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    int check = 0, i, j, word[26] = {0};

    printf("Enter a word: ");
    while((a = getchar()) != '\n'){
        j = toupper(a) - 'A';
        word[j] += 1;
    }

    printf("Enter another word: ");
    while((a = getchar()) != '\n'){
        j = toupper(a) - 'A';
        word[j] -= 1;
    }

    for(j=0; j<=25; j++){
        if (word[j] == 0){
            check++;
        }
    }

    if(check == 26){
        printf("The words are anagrams.\n");
    }else{
        printf("The words are not anagrams.\n");
    }

    return 0;
}
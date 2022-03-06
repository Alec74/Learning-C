#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, sentance[256], terminate;
    int i, s=0, c;

    printf("Enter a sentance: ");

    while ((a = getchar()) != '\n'){
        i++;
        sentance[i] = a;
        if(a == '.' || a == '?' || a == '!'){
            terminate = a;
            i--;
            break;
        }
    }

    while (i >= 0){
        i--;
        s++;
        if (sentance[i] == ' '){
            c = i;
            for(s; s >= 0; s--){
                i++;
                if (sentance[i] != ' ' && sentance[i] != '.' && sentance[i] != '!' && sentance[i] != '?'){
                    putchar(sentance[i]);
                }
            }
            putchar(' ');
            i = c;
        }else if (i == 0){
            putchar(' ');
            c = i;
            for(s; s >= 0; s--){
                putchar(sentance[i]);
                i++;
            }
            i = c;
        }
    }
    putchar(terminate);

    putchar('\n');

    return 0;
}
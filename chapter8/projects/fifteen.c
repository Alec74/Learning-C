#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, ch, sentance[256], terminate;
    int i, s=0, c, shift;

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

    printf("Enter shift amount: ");
    scanf("%d", &shift);


    printf("Encrypted message: ");
    for(s=0; s <= i; s++){
        /*
        if(sentance[s] != ' ' && sentance[s] != '\n'){
            ch = ((sentance[s] - 'A') + shift) % 26 + 'A';
        }else{
            putchar(' ');
        }
        */
       if(sentance[s] >= 'a' && sentance[s] <= 'z'){
           ch = ((sentance[s] - 'a') + shift) % 26 + 'a';
           putchar(ch);
       }else if(sentance[s] >= 'A' && sentance[s] <= 'Z'){
           ch = ((sentance[s] - 'A') + shift) % 26 + 'A';
           putchar(ch);
       }
       if (sentance[s] == ' '){
           putchar(' ');
       }
    }

    putchar(terminate);
    putchar('\n');

    return 0;
}
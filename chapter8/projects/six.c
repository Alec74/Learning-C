#include <stdio.h>
#include <ctype.h>

int main(void){
    int i = 0;
    char ch, original[64] = {0}, u;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n'){
        original[i++] = ch;
    }

    printf("In Biff speak: ");
    
    for (i = 0; i < 64; i++){
        u = toupper(original[i]);
        switch (u){
            case 'A':
                printf("%c", '4');
                break;
            case 'B':
                printf("%c", '8');
                break;
            case 'E':
                printf("%c", '3');
                break;
            case 'I':
                printf("%c", '1');
                break;
            case 'O':
                printf("%c", '0');
                break;
            case 'S':
                printf("%c", '5');
                break;
            default:
                printf("%c", u);
                break;
        }
    }

    printf("!!!!!!!!!!!!!!!!\n");

    return 0;
}
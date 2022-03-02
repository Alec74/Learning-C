/* (Project 7.11) Display first initial and last name */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, f;
    int val = 0;

    printf("Enter a first and last name: ");
    f = getchar();

    while ((a = getchar()) != '\n'){
        if (a != ' ')
        ; else{
            break;
        }
    }
    
    while ((a = getchar()) != '\n'){
        if (a != ' '){
            putchar(a);
        } else{
            break;
        }
        
    }
    
    printf(", %c.\n", f);

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, f, name[20];
    int val = 0, i = 0;

    printf("Enter a first and last name: ");
    f = getchar();

    while ((a = getchar()) != '\n'){
        if (a != ' ')
        ; else{
            break;
        }
    }

    while ((a = getchar()) != '\n'){
        i++;
        name[i] = a;
        putchar(name[i]);
    }

    printf(", %c.\n", f);

    return 0;
}
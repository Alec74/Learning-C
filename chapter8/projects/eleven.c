#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, b[16];
    int i=0;

    printf("Enter a phone number: ");

    while((a = getchar()) != '\n'){
        i++;
        b[i] = a;
        // printf("%c", b[i]);
    }

    printf("In numeric form: ");
    for(int j = 0; j < 16; j++){
        if(b[j] >= '0' && b[j] <= '9' || b[j] == '-' || b[j] == '+')
        putchar(b[j]);
    }
    putchar('\n');

    return 0;
}
/* (Project 7.04) Change a alphabetic phone number to numeric form */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    int i;

    printf("Enter a phone number: ");
    while (a = getchar()){
        i++;
        if (a < 123 && a > 96){
            a = toupper(a);
        }
        switch (a){
            case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 45:
                putchar(a);
                break;
            case 65: case 66: case 67:
                putchar(50);
                break;
            case 68: case 69: case 70:
                putchar(51);
                break;
            case 71: case 72: case 73:
                putchar(52);
                break;
            case 74: case 75: case 76:
                putchar(53);
                break;
            case 77: case 78: case 79:
                putchar(54);
                break;
            case 80: case 82: case 83:
                putchar(55);
                break;
            case 84: case 85: case 86:
                putchar(56);
                break;
            case 87: case 88: case 89:
                putchar(57);
                break;
            default:
                putchar(10);
                return 0;
        }
    }

    return 0;
}
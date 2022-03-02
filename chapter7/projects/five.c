/* (Project 7.05) Scrabble word value */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    float val = 0.0f;

    printf("Enter a scrabble word: ");
    while ((a = getchar()) != '\n'){

        switch (toupper(a)){
            case 65: case 69: case 73: case 76: case 78: case 79: case 82: case 83: case 84: case 85: //AEILNORSTU +1
                val = val + 1.0f;
                break;
            case 68: case 71: //DG +2
                val += 2.0f;
                break;
            case 66: case 67: case 77: case 80: //BCMP +3
                val += 3.0f;
                break;
            case 70: case 72: case 86: case 87: case 89: //FHVWY +4
                val += 4.0f;
                break;
            case 75: //K +5
                val += 5.0f;
                break;
            case 74: case 88: //JX +8
                val += 8.0f;
                break;
            case 81: case 90: // QZ +10
                val += 10.0f;
                break;
            default:
                break;
        }
        
    }
    printf("Scrabble value: %.0f\n", val);

    return 0;
}
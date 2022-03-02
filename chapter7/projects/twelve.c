/* (Project 7.12) Evaluate an expression */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char o;
    float f, val;

    printf("Enter an expression: ");
    scanf("%f", &val);

    while ((o = getchar()) != '\n'){
        scanf("%f", &f);

        switch(o){
            case '+':
                val+=f;
                break;
            case '-':
                val-=f;
                break;
            case '*':
                val*=f;
                break;
            case '/':
                val/=f;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %.2f\n", val);
    
    return 0;
}
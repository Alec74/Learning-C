/* (Project 6.12) */
#include <stdio.h>

int main(void)
{
    float e = 1.0f, n, j;

    printf("Enter a minimum value (solving for e): ");
    scanf("%f", &n);

    // for(float j = n, i = 1; i <= n; i++, j--){
    //     e = e + (1/j);
    // }

    // for (float j = 1.0f, i = 1.0f; j < n; i++, j++){
    //     e += (1.0f/i);
    //     j = 1.0f/i;
    // }

    for (float i = 0.0;;){
        ++i;
        e = e + (1/i);
        if(1/i <= n){
            printf("e: %f \tNumber of terms added: %f\n", e, i);
            return 0;
        }
        if (n > 1){
            printf("Value entered was too large\n");
            return 0;
        }
    }

    

	
}

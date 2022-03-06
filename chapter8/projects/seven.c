#include <stdio.h>

int main(void){
    int rsum, csum = 0, i, j, five[5][5] = {0};
    
    for (i=0; i < 5; i++){
        printf("Enter row %d: ", i + 1);
        for (j=0; j < 5; j++){
            scanf("%d", &five[i][j]);
        }
    }

    printf("Row totals:\t");
    for (i=0; i < 5; i++){
        rsum = 0;
        for (j=0; j < 5; j++){
            rsum += five[i][j];
        }
        printf("%d ", rsum);
    }
    printf("\n");

    printf("Coloumn totals:\t");
    for (i = 0; i < 5; i++){
        csum=0;
        for (j = 0; j < 5; j++){
            csum += five[j][i];
        }
        printf("%d ", csum);
    }
    printf("\n");

    return 0;
}
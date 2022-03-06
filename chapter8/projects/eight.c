#include <stdio.h>

int main(void){
    int h, l, rsum, csum = 0, i, j, five[5][5] = {0}, hA[5], lA[5]; //[row][column] where row is a student and column is a quiz
    
    for (i=0; i < 5; i++){
        printf("Enter 5 quiz grades student %d: ", i + 1);
        for (j=0; j < 5; j++){
            scanf("%d", &five[i][j]);
        }
    }

    printf("Student averages:\t");
    for (i=0; i < 5; i++){
        rsum = 0;
        for (j=0; j < 5; j++){
            rsum += five[i][j];
        }
        printf("%d ", rsum / 5);
    }
    printf("\n");

    printf("Student totals:\t\t");
    for (i=0; i < 5; i++){
        rsum = 0;
        for (j=0; j < 5; j++){
            rsum += five[i][j];
        }
        printf("%d ", rsum);
    }

    printf("\nQuiz averages:\t\t");
    for (i = 0; i < 5; i++){
        csum=0;
        h = 0;
        l = 100;
        for (j = 0; j < 5; j++){
            csum += five[j][i];
            if (five[j][i] > h){
                h = five[j][i];
            }
            if (five[j][i] < l){
                l = five[j][i];
            }
        }
        hA[i] = h;
        lA[i] = l;
        printf("%d ", csum / 5);
    }
    printf("\nQuiz high scores: \t");
    for (i=0; i < 5; i++){
        printf("%d ", hA[i]);
    }
    printf("\nQuiz low scores: \t");
    for (i=0; i < 5; i++){
        printf("%d ", lA[i]);
    }
    printf("\n");

    return 0;
}
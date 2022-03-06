#include <stdio.h>

int main(void){
    char checkerBoard[8][8];

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            checkerBoard[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
            // printf("%d %d", i, j);
            printf("%c\t", checkerBoard[i][j]);
            if (j % 7 == 0 && j != 0){
                printf("\n");
            }
            
        }
    }
    printf("\n");
    

    return 0;
}
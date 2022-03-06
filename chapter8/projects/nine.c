#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void){
    char array[10][10], set = 'A', mv=0, x=0, y=0;
    int i, j, up=0, down=0, left=0, right=0;

    for (i=0; i < 10; i++){
        for (j=0; j < 10;j++){
            array[i][j] = '.';
            // printf("%c", array[i][j]);
        }
        // putchar('\n');
    }

    srand((signed) time(NULL));

    array[x][y] = set;
    set = 'B';
    while (set >= 'A' && set <= 'Z'){
        mv = rand() % 4;
        switch(mv){
            case 0:
                right = 1;
                if ((x + 1) >= 0 && (x + 1) <= 10){
                    if (array[x + 1][y] == '.'){
                        array[++x][y] = set;
                        set++;
                        up = down = left = right = 0;
                    }
                }
                break;
            case 1:
                up = 1;
                if ((y + 1) >= 0 && (y + 1) <= 10){
                    if (array[x][y + 1] == '.'){
                        array[x][++y] = set;
                        set++;
                        up = down = left = right = 0;
                    }
                }
                break;
            case 2:
                left = 1;
                if ((x - 1) >= 0 && (x - 1) <= 10){
                    if (array[x - 1][y] == '.'){
                        array[--x][y] = set;
                        set++;
                        up = down = left = right = 0;
                    }
                }
                break;
            case 3:
                down = 1;
                if ((y - 1) >= 0 && (y - 1) <= 10){
                    if (array[x][y - 1] == '.'){
                        array[x][--y] = set;
                        set++;
                        up = down = left = right = 0;
                    }
                }
                break;
            default:
                break;
        }
        if (up == 1 && down == 1 && left == 1 && right == 1){
            printf("Program terminated prematurely\n");
            break;
        }
    }

    for (i=0; i < 10; i++){
        for (j=0; j < 10;j++){
            printf("%c ", array[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
#include <stdio.h>

int main(void){
    int temperatureReadings[30][24] = {0}, row = 0, col = 0, avg = 0, val = 30 * 24;

    for (; row < 30; row++){
        for(; col < 24; col++){
            avg+=temperatureReadings[row][col];
        }
    }
    printf("%d\t%d\t%d\n", avg, val, avg/val);

    return 0;
}
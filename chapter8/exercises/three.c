#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool weekend[] = {false, [0] = true, [6] = true};

    for (int i = 0; i < sizeof(weekend) / sizeof(weekend[0]); i++){
        printf("%d\n", weekend[i]);
    }

    return 0;
}
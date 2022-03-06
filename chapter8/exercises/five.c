//Print the Fibonacci numbers
#include <stdio.h>

int main(void){
    int fib[40] = {0, [0] = 0, [1] = 1};

    printf("%d\n%d\n",fib[0], fib[1]);

    for (int i = 2; i < sizeof(fib) / sizeof(fib[0]); i++){
        fib[i] = fib[i-2] + fib[i-1];
        printf("%d\n", fib[i]);
    }

    return 0;
}
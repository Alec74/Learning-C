/* (Project 7.06) Print sizeof values */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a;
    short b;
    long c;
    float d;
    double e;
    long double f;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", sizeof(a), sizeof(b), sizeof(c), (int) sizeof(d), (int) sizeof(e), (int) sizeof(f));

    return 0;
}
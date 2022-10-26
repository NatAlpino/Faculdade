#include<stdio.h>

int* gerarRandomico() {
    
    static int r[10];
    int a;

    for(a = 0; a < 10; ++a) {
        r[a] = rand();
        printf("r[%d] = %d\n", a, r[a]);
    }
    return r;
}
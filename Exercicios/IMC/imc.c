#include <stdio.h>

int main(void) {
    float value = 29.3;

    if(value <= 18.5) { 
        printf("Abaixo do Peso Ideal");
    } 
    else if (value <= 24.9) { 
            printf("Peso Ideal");
    }
        else {
                printf("Acima do Peso Ideal");
            }

    return 0;
}
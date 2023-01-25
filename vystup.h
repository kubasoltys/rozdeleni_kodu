#include <stdio.h>
#include <math.h>

float enteringRadius() {
    float r;
    int countOfChar;
    do {
        printf("Zadej polomer v centimetrech:");
        scanf("%f", &r);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Nebylo zadano realne cislo. Zkuste znovu.\n");
        } else if (r <= 0) {
            printf("Zadej kladne cislo.\n");
        }
    } while (r <= 0 || countOfChar != 0);
    return r;
}
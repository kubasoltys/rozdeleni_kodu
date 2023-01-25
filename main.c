#include <stdio.h>
#include <math.h>
#include "vystup.h"

int main() {
    int user;
    int countOfChar;
    float radius;

    do {
        printf("\nMenu\n");
        printf("1 - obvod kruhu\n");
        printf("2 - obsah kruhu\n");
        printf("3 - objem koule\n");
        printf("4 - povrch koule\n");
        printf("5 - konec programu\n");
        printf("Zadej volbu:");
        scanf("%d", &user);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        switch (user) {
            case 1:
                radius = enteringRadius();
                printf("\nObvod kruhu o polomeru %.2f cm je %.2f cm.\n\n\n", radius, 2 * 3.14 * radius);
                break;
            case 2:
                radius = enteringRadius();
                printf("\nObsah kruhu o polomeru %.2f cm je %.2f. cm2\n\n\n", radius, 3.14 * radius * radius);
                break;
            case 3:
                radius = enteringRadius();
                printf("Objem koule.\n");
                printf("\nObjem koule o polomeru %.2f cm je %.2f. cm3\n\n\n", radius, 4.0 / 3 * 3.14 *radius);
                break;
            case 4:
                radius = enteringRadius();
                printf("Povrch koule.\n");
                printf("\nPovrch koule o polomeru %.2f cm je %.2f. cm2\n\n\n", radius, 4 * 3.14 * radius);
                break;
            case 5:
                printf("Program bude ukoncen!!!!\n");
                break;
            default:
                printf("\nChybna volba.\n");
        }
    } while (user != 5);
    return 0;
}

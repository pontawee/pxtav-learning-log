#include <stdio.h>

int main(void) {
    int division;
    int modulo[64];
    int index = 0, result;

    scanf("%d", &division);
    if (division == 0) {
        printf("0");
    } else {
        while (division > 0) {
            result = division % 2;
            modulo[index] = result;
            division = division / 2;
            index++;
        }
        for (index = index - 1; index >= 0; index--) {
            printf("%d", modulo[index]);
        }
    }
     return 0;
}
#include <stdio.h>

int main(void) {
    printf("Enter an integer to convert to binary: ");
    int Integer;
    int modulo[64];
    int index = 0, result;
    int count;

    scanf("%d", &Integer);
    if (Integer == 0) {
        modulo[index] = 0;
        index++;
    } else {
        while (Integer > 0) {
            result = Integer % 2;
            modulo[index] = result;
            Integer = Integer / 2;
            index++;
        }
    }
    count = index;
    printf("result: ");
    for (index = index - 1; index >= 0; index--) {
        printf("%d", modulo[index]);
    }
    printf("\nCount: %d\n", count);
    return 0;
}
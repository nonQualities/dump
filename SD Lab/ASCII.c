#include <stdio.h>

int main() {
    printf("ASCII Character Table:\n");
    printf("Character\tValue\n");
    for (int i = 0; i < 128; i++) {
        printf("%c\t\t%d\n", i, i);
    }
    return 0;
}

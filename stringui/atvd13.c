#include <stdio.h>

int main() {
    int M[4][4], somaAbaixo = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &M[i][j]);
            if (i > j) somaAbaixo += M[i][j];
        }
    }

    printf("Soma abaixo da diagonal principal: %d\n", somaAbaixo);
    printf("Diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", M[i][i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float **M = (float**)malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++) {
        M[i] = (float*)malloc(n * sizeof(float));
        for (int j = 0; j < n; j++) {
            M[i][j] = (float)(rand() % 100) / 10;
            printf("%.2f ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);
    return 0;
}

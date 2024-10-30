#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int kEsimoMenor(int *A, int n, int k) {
    qsort(A, n, sizeof(int), compare);
    return A[k - 1];
}

int main() {
    int n, k;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *A = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite k: ");
    scanf("%d", &k);
    if (k > 0 && k <= n) {
        printf("k-ésimo menor elemento: %d\n", kEsimoMenor(A, n, k));
    } else {
        printf("Valor de k inválido.\n");
    }

    free(A);
    return 0;
}

#include <stdio.h>

int main() {
    int vetor[20];
    int i,j;

    for (i=0; i < 20; i++)
    {
        printf("Determine 20 valores para o vetor");
        scanf("%d", &vetor[i]);
    }
    printf("Escolha um valor, iremos busca-lo no vetor");
    scanf("%d",&j);

    for (i = 0; i < 20; i++)
    {
      if (vetor[i] == j) {
       j = vetor[i];
       printf("O numero selecionado eh %d", );
      }
    }
      return 0; 
    }
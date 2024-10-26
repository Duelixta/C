#include <stdio.h>

int main() {
    int V[5];
for(int i = 0; i<5;i++) {
    printf("Insira 5 valores para o vetor");
    scanf("%d", &V[i]);
}

float M = (V[0] + V[1] + V[2] + V[3] + V[4])/5;

printf("Resultado da media dos seus vetores\n %f", M);

return 0;
}
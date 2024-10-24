#include <stdio.h>
#include <string.h>

int main() {

 int vet[5];
 int i;
 for(i = 0; i<5; i++) {
    printf("Fudido determine os valores do vetor");
    scanf("%d", &vet[i]);
}
for(i = 0; i<5;i++) {
printf("Conteudo das posições dos vetores %d", vet[i]);
}
 return 0;
}
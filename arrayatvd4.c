#include <stdio.h>

int main () {

int A[10], B[10], C[10];

for (int i = 0; i <10; i++) {
    printf("Digite valores para o vetor A\n");
    scanf("%d", &A[i]);
}
for (int i = 0; i < 10; i++){
    printf("Digite valores para o vetor B\n");
    scanf("%d", &B[i]);
}
for(int i = 0; i < 10; i++) {
    C[i] = A[i] - B[i];
    printf("O vetor C eh %d\n", C[i]);
}
return 0;
}

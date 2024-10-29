#include <stdio.h>

void PreencheV(int X[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Digite valores para o Vetor\n");
        scanf("%d",&X[i]);
    }
}
void copiaNegativos(int X[], int vetorNeg[]) {
    int j; 
    for(int i = 0; i < 10; i++) {
        if(X[i] < 0) {
            vetorNeg[j++] = X[i];
}
}
while(vetorNeg[j++] < 10){
    vetorNeg[j++] = 0;
}
}



int main() { 

    int X[10], vetorNeg[10];
    PreencheV(X);
    copiaNegativos(X, vetorNeg);


for(int i = 0; i < 10; i++) {
    if(vetorNeg[i] < 0) {
    printf("Os valores negativos são %d\n",vetorNeg[i]);
    }
}


return 0;
}
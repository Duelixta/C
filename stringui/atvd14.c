#include <stdio.h>
#define cu 5

void preencherMatriz(int matriz[cu][cu]) {
    for (int i = 0; i < cu; i++) {
        for (int j = 0; j < cu; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somaLinha4(int matriz[cu][cu]) {
    int soma = 0;
    for (int j = 0; j < cu; j++) {
        soma += matriz[3][j];
    }
    return soma;
}

int somaColuna2(int matriz[cu][cu]) {
    int soma = 0;
    for (int i = 0; i < cu; i++) {
        soma += matriz[i][1];
    }
    return soma;
}

int somaDiagonalPrincipal(int matriz[cu][cu]) {
    int soma = 0;
    for (int i = 0; i < cu; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int matriz[cu][cu]) {
    int soma = 0;
    for (int i = 0; i < cu; i++) {
        soma += matriz[i][cu - 1 - i];
    }
    return soma;
}

int somaTodosElementos(int matriz[cu][cu]) {
    int soma = 0;
    for (int i = 0; i < cu; i++) {
        for (int j = 0; j < cu; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[cu][cu];
    preencherMatriz(matriz);
    printf("Soma da linha 4: %d\n", somaLinha4(matriz));
    printf("Soma da coluna 2: %d\n", somaColuna2(matriz));
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal(matriz));
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria(matriz));
    printf("Soma de todos os elementos: %d\n", somaTodosElementos(matriz));
    return 0;
}
//putaquepariu isso demorou muito meu deus eu nao aguentio maisasflk;wnmel;kgjnmwrlk;hgmnkl;rwemh;klrew;
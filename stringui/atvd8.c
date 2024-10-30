#include <stdio.h>

int main() {
    int inteiro;
    float real;
    char caractere;
    int *pInt = &inteiro;
    float *pFloat = &real;
    char *pChar = &caractere;

    printf("Digite um inteiro, um real e um caractere: ");
    scanf("%d %f %c", pInt, pFloat, pChar);

    printf("Enderecos e conteudos antes: %p %d, %p %.2f, %p %c\n",
           (void*)pInt, *pInt, (void*)pFloat, *pFloat, (void*)pChar, *pChar);

    printf("Digite novos valores: ");
    scanf("%d %f %c", pInt, pFloat, pChar);

    printf("Enderecos e conteudos depois: %p %d, %p %.2f, %p %c\n",
           (void*)pInt, *pInt, (void*)pFloat, *pFloat, (void*)pChar, *pChar);
    return 0;
}

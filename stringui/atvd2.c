/* Desenvolva um programa para criptografar uma string. Para isso, solicite ao usuário uma
chave k, correspondente a um número inteiro. Para criptografia, obtenha o número ASCII de
cada uma das letras e some a cada uma delas o valor à chave k. Converta a letra obtida
novamente para string, para gerar a letra criptografada.
Dica: Para evitar que a soma seja superior a 255, fora do intervalo da tabela ASCII, divida o
valor da soma por 255.
Ex.: Lcripto = (L + k) % 255, onde L = ASCII da letra
*/

#include <stdio.h>
#include <string.h>


int main () {
char porra[100];
int k;

  printf("Me dê uma palavra e um numero.\n\n");
    scanf("%s %i",porra, &k);

    int meu = strlen(porra);

  for (int i = 0; i < meu;i++) {

    porra[i] = (porra[i] + k) % 255;
  }
  
    printf("%s", porra);
return 0;
    }


 
    
  
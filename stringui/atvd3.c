#include <stdio.h>
#include <string.h>


int main () {
char porra[100];
int k;

  printf("Me dê o numero, e a codificacao da sua palavra\n\n");
    scanf("%s %i",porra, &k);

    int meu = strlen(porra);

    for(int i = 0; i < meu; i++) {

        porra[i] = (porra[i] - k)/255 + ((porra[i] - k) % 255);
    }
      
    printf("%s", porra);
return 0;
}
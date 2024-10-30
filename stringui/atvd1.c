#include <stdio.h>
#include <string.h>
char string[100] = "aputaquetepariu"; // string da palavra
char macaco[100]; // String na qual vou receber a palavra ao inverso

int main() {
int len = strlen(string); //Strlen p receber o tamanho da string/palavra
for (int i = 0; i < len;i++) { // enquanto i for menor que len, transferimos os caracteres de string p macaco, e printamos abaixo
  macaco[i] = string[len - i - 1];
}
printf("É isso ai %s", macaco);

return 0;
}


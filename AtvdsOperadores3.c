/*Desenvolva algoritmos, utilizando a linguagem C, para os problemas abaixo:
AED1 - Michelle Nery Nascimento 11
1. Faça um programa que calcule e mostre a área de um triângulo.
2. Faça um programa que calcule e mostre a área de um círculo.
3. Faça um programa que receba um número positivo e maior que zero, calcule e
mostre:
- o número digitado ao quadrado;
- o número digitado ao cubo;
- a raiz quadrada do número digitado;
- a raiz cúbica do número digitado.
4. Faça um programa que receba dois números maiores que zero, calcule e mostre
um elevado ao outro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int a,quad,cub;
double raizqd,raizcub;
printf("Me de um numero maior que zero, para calcular");
scanf("%d",&a);

    quad = pow(a,2);
    cub = pow(a,3);
    raizqd = sqrt(a);
    raizcub = cbrt(a); /*Raiz cubica eh cbrt*/

printf("O resultado das operacoes com o numero %d, sao\n seu quadrado eh %d, seu cubico eh %d, sua raiz qdr eh %.2lf e sua raiz cubica eh %.2lf",a,quad,cub,raizqd,raizcub);

return 0;
}
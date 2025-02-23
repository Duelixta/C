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
    int a,b;
    printf("Preciso que você me dê a altura e o comprimento de um triangulo");
    scanf("%d %d",&a,&b);
    
    int area1 = a * b;
    int area2 = area1/2;
    printf("O valor da area de um triangulo com %d de altura e %d de comprimento eh %d",a,b,area2);

    return 0;
}
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
#define PI 3.14159265358979323846

int main () {
    int a,b;
    printf("Me dê o raio de um circulo para que eu possa calcular sua área");
    scanf("%d",&a);
    b = PI*pow(a,2);

    printf("O circulo de raio %d tem a área total de %d",a,b);

    return 0;
}
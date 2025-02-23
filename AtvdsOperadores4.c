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
    printf("vamos calcular um numero elevado ao outro, preciso de 2 numeros");
    scanf("%d %d",&a,&b);
    int ele = pow(a,b);
    int ele2 = pow(b,a);

    printf("Os numeros %d e %d elevados um ao outro serao, %d ^ %d = %d e %d ^ %d = %d",a,b,a,b,ele,b,a,ele2);
    return 0;
}
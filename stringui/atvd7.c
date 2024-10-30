#include <stdio.h>

int main() {
    float matriz[5][4], maiorNota = 0, somaNotas = 0;
    int matriculaMaiorNota;

    for (int i = 0; i < 5; i++) {
        printf("Digite matricula, media das provas e trabalhos do aluno %d: ", i + 1);
        scanf("%f %f %f", &matriz[i][0], &matriz[i][1], &matriz[i][2]);
        matriz[i][3] = matriz[i][1] + matriz[i][2];
        somaNotas += matriz[i][3];
        if (matriz[i][3] > maiorNota) {
            maiorNota = matriz[i][3];
            matriculaMaiorNota = (int)matriz[i][0];
        }
    }

    printf("Matricula do aluno com maior nota final: %d\n", matriculaMaiorNota);
    printf("Media aritmetica das notas: %.2f\n", somaNotas / 5);
    return 0;
}

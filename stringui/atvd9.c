#include <stdio.h>
#define PI 3.14159

void calcCircunferencia(float R, float *compr, float *area) {
    *compr = 2 * PI * R;
    *area = PI * R * R;
}

int main() {
    float raio, comprimento, area;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    calcCircunferencia(raio, &comprimento, &area);
    printf("Comprimento: %.2f, Area: %.2f\n", comprimento, area);
    return 0;
}

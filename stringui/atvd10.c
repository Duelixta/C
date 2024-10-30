void func(int *px, int *py) {
    px = py;
    *py = (*py) * (*px);
    *px = *px + 2;
}

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    func(&x, &y);
    printf("x = %d, y = %d", x, y);
    return 0;
}
// nao entendi o que a funcao faz, mas ela nao altera os valores de x e y, entao a saida sera x = 2, y = 3
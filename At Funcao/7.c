#include<stdio.h>
#include<math.h>

int funcao07(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return maior + menor;
}

int main() {

    double a, b ,c , valor;
    scanf("%lf %lf %lf", &a, &b, &c);

    valor = funcao07(a,b ,c);
    printf("%lf", valor);
    return 0;
}

#include<stdio.h>
#include<math.h>

double funcao06(double a, double b) {
    if (a == b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    double a, b, valor;
    scanf("%lf %lf", &a, &b);

    valor = funcao06(a,b);
    printf("%lf", valor);

    return 0;
}

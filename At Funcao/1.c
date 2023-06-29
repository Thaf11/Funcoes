#include<stdio.h>
#include<math.h>

double funcao01(double a, double b, double c) {
    double delta = (b * b) - (4 * a * c);

    return delta;
}

int main() {
    double a, b ,c , valor;
    scanf("%lf %lf %lf", &a, &b, &c);

    valor = funcao01(a,b ,c);
    printf("%lf", valor);

    return 0;
}

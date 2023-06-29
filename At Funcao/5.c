#include<stdio.h>
#include<math.h>

double funcao05(double a1, double an, double n) {
    double pa = (n * (a1 + an)) / 2;
    return pa;
}

int main() {

    double al, an ,n , valor;
    scanf("%lf %lf %lf", &al, &an, &n);

    valor = funcao05(al,an ,n);
    printf("%lf", valor);
    return 0;
}

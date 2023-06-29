#include<stdio.h>
#include<math.h>

int funcao04(int a, int b, int c) {
    int pares = 0;
    if (a % 2 == 0) {
        pares++;
    }
    if (b % 2 == 0) {
        pares++;
    }
    if (c % 2 == 0) {
        pares++;
    }
    return pares;
}


int main() {

    double a, b ,c , valor;
    scanf("%lf %lf %lf", &a, &b, &c);

    valor = funcao04(a,b ,c);
    printf("%lf", valor);
    return 0;
}

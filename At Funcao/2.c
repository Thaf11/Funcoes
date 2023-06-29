#include<stdio.h>
#include<math.h>

int funcao02(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int main() {

    double a, b, valor;
    scanf("%lf %lf", &a, &b);

    valor = funcao02(a,b);
    printf("%lf", valor);
    return 0;
}

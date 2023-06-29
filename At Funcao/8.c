#include<stdio.h>
#include<math.h>

double funcao08(double c, int m, double t) {
    double j = c * m * (t / 100);

    return j;
}

int main() {

    double c, m ,t , valor;
    scanf("%lf %lf %lf", &c, &m, &t);

    valor = funcao08(c,m ,t);
    printf("%lf", valor);
    return 0;
}

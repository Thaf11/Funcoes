#include<stdio.h>
#include<math.h>

int funcao10(int a, int b) {
    int soma = 0, i;
    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {

    int a, b , valor;
    scanf("%d %d ", &a, &b);

    valor = funcao10(a,b);
    printf("%d", valor);
    return 0;
}


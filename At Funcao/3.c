#include<stdio.h>
#include<math.h>

void funcao03(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}


int main() {

    int n;
    scanf("%d",&n);
    funcao03(n);

    return 0;
}

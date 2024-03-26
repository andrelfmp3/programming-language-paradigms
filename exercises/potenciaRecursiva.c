#include <stdio.h>
#include <stdlib.h>

int calculaPotencia (int x, int n);

int main() {

    int x, n;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    int resultado = calculaPotencia (x, n);

    printf("%d elevado a %d é %d.", x, n, resultado );

    return 0;

}

int calculaPotencia (int x, int n){
    if( n == 0){
        return 1;
    }
    return x * calculaPotencia (x, n-1);
}
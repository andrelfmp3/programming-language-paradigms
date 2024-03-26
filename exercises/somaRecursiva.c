#include <stdio.h>
#include <stdlib.h>

int somaRecursiva(int tamanho, int *array);

int main() {

    int array[5] = {2,3,4,5,6};
    int tamanho = 5;

    int resultado = somaRecursiva(array[5], tamanho);

    printf("%d", resultado);

    return 0;

}

int somaRecursiva(int tamanho, int *array){ // errado
    if (tamanho == 0){
        return 0;
    }
    return array[tamanho-1] + somaRecursiva(array, tamanho-1);
}
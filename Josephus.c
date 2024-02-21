#include <stdio.h> // josephus problem INCOMPLETO
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int nc; // casos de teste
    int n; // quantidade de pessoas
    int k;  // quantidade de saltos

    scanf("%d", &n);
    scanf("%d", &k);

    int a[n-1]; //"A"rray de tamanho n

    for (int i = 0; i < n; i++){ // numera array de 1 a N (se n =5, array = 1,2,3,4,5)
        a[i] = i+1;
    }

    // 1 2 3 4 5
    // 1 0 3 4 5
    // 1 0 3 0 5
    // 0 0 3 0 5
    // 0 0 3 0 0


    // zerar os na posição k, e recomeçar quando chegar no fim do array. Deixar apenas um a != 0
    for (int i = 0; i < n-1; i++){ //zerar os na posição k, n=1 para sobrar.
        a[k] == 0;

        // k = k + k;
        // como lidar com o k > n (ou k + k > n) ? como voltar ao começo do array?
        
    }


    for (int i = 0; i < n; i++){ //print do unico diferente de zero
        if (a[i] != 0){
            printf("%d", a[i]);
        }
    }

    return 0;
}
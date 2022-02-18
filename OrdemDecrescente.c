#include <stdlib.h>
#include <stdio.h>

int i;
int j;
int vetorA[10];
int vetorB[10];
int auxiliar;

void main(){
    printf("Programa Ordem Decrescente: \n");

    for(i = 0; i < 10; i++){
        printf("Digite um valor multiplo de 5:");
        scanf("%d", &vetorA[i]);
    }

    for(i = 0; i < 10; i++){
        vetorB[i] = (vetorA[i] / 5);
    }

    for(i = 0; i < 9; i++){
        for(j = i + 1; j < 10; j++){
            if(vetorB[i] < vetorB[j]){
                auxiliar = vetorB[i];
                vetorB[i] = vetorB[j];
                vetorB[j] = auxiliar;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d \n", vetorB[i]);
    }

}

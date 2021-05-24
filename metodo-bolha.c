#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

void lerVetor(int vetor[], int tamanho){
    for(int i = 1; i <= tamanho; i++){
        printf("Vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    } 
}

void bubbleSort(int vetor[], int tamanho){
      int aux, cont = tamanho - 1;
      while(cont > 0){
          for(int i = 0; i < tamanho - 1; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
          }         
          tamanho--;
          cont--;
      }    
}

void escreverVetor(int vetor[], int tamanho){
    for(int i = 1; i <= tamanho; i++){
        printf(" %d ", vetor[i]);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    lerVetor(vetor, TAM);

    printf("\nVetor desordenado: ");
    escreverVetor(vetor, TAM);

    bubbleSort(vetor, TAM);

    printf("\nVetor ordenado: ");
    escreverVetor(vetor, TAM);
    
    return 0;
}

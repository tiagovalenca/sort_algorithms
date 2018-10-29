#include <stdio.h>

void heapSort(int vetor[], int tamanho);

int main(void) {
  int numeros;
  printf("Digite o numero de elementos no array : ");
  scanf("%d", &numeros);
  int ar[numeros];
  
  for(int i = 0; i < numeros; i++){
    scanf("%d", &ar[i]);
  }

  heapSort(ar, numeros);

  for(int i = 0; i < numeros; i++){
    printf("%d\n", ar[i]);
  }
  return 0;
}

void heapSort(int vetor[], int tamanho) {
   int i = tamanho / 2, pai, filho, t;
   while(1) {
      if (i > 0) {
          i--;
          t = vetor[i];
      } else {
          tamanho--;
          if (tamanho == 0) return;
          t = vetor[tamanho];
          vetor[tamanho] = vetor[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < tamanho) {
          if ((filho + 1 < tamanho)  &&  (vetor[filho + 1] > vetor[filho]))
              filho++;
          if (vetor[filho] > t) {
             vetor[pai] = vetor[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      vetor[pai] = t;
   }
}

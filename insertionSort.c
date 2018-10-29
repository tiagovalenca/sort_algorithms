#include <stdio.h>

void insertionSort(int vetor[], int tamanho) {

  int escolhido, j;

  for (int i = 1; i < tamanho; i++) {
		escolhido = vetor[i];
		j = i - 1;
		
		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = escolhido;
	}
}

int main(void) {
  int numeros;
  printf("Digite o numero de elementos no array : ");
  scanf("%d", &numeros);
  int ar[numeros];
  
  for(int i = 0; i < numeros; i++){
    scanf("%d", &ar[i]);
  }

  insertionSort(ar, numeros);

  for(int i = 0; i < numeros; i++){
    printf("%d\n", ar[i]);
  }
  return 0;
}

#include <stdio.h>

void bubbleSort(int ar[], int tamanho) {
	int temp;

	for (int i = 0; i < tamanho - 1; i++){
             for (int j = (i+1); j < tamanho; j++){
                  if (ar[j] < ar[i]){
                       temp = ar[i];
                       ar[i] = ar[j];
                       ar[j] = temp;
                  }
              }
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

  bubbleSort(ar, numeros);

  for(int i = 0; i < numeros; i++){
    printf("%d\n", ar[i]);
  }
  return 0;
}

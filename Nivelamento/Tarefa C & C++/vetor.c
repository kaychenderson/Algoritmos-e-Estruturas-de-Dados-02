#include <stdio.h>

int main(){
  int num;
  int vetor[] = {1, 7, 3, 9, 2, 8, 10, 4};
  int tamanho = sizeof(vetor)/sizeof(vetor[0]);
  int indice = -1;

  printf("Informe um numero \n");
  scanf("%d", &num);

  for(int i = 0; i < tamanho; i++){
    if(vetor[i] == num){
      indice = i;
      break;
    }
  }

  if(indice != -1){
    printf("Elemento encontrado. Indice: %d", indice);
  } else {
    printf("Elemento nao encontrado. Indice: %d", indice);
  }

  return 0;
}
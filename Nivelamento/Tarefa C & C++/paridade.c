#include <stdio.h>

int main(){
  int num;

  printf("Informe algum numero: \n");
  scanf("%d", &num);

  if(num % 2 == 1){
    printf("O numero eh impar");
  } else {
    printf("o numero eh par");
  }

  return 0;
}
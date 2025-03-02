#include <stdio.h>

int main(){
  int num1, num2, num3;
  float media;

  printf("Informe tres numeros inteiros: \n");
  scanf("%d %d %d", &num1, &num2, &num3);

  media = (num1+num2+num3)/3;
  printf("A media eh: %.2f", media);

  return 0;
}
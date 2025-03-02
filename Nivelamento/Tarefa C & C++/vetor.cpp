#include <iostream>

int main(){
  int num;
  int vetor[] = {1, 7, 3, 9, 2, 8, 10, 4};
  int tamanho = sizeof(vetor)/sizeof(vetor[0]);
  int indice = -1;

  std::cout << "Informe um numero \n";
  std::cin >> num;

  for(int i = 0; i < tamanho; i++){
    if(vetor[i] == num){
      indice = i;
      break;
    }
  }

  if(indice != -1){
    std::cout << "Elemento encontrado. Indice: " << indice;
  } else {
    std::cout << "Elemento nao encontrado. Indice: " << indice;
  }

  return 0;
}
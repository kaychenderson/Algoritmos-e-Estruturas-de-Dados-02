#include <iostream>

int main(){
  int num1, num2, num3;
  float media;

  std::cout << "Informe tres numeros inteiros: \n";
  std::cin >> num1 >> num2 >> num3;

  media = (num1+num2+num3)/3.0;

  std::cout << "A media eh: " << media;

  return 0;
}
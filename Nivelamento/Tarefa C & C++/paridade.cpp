#include <iostream>

int main() {
  int num;

  std::cout << "Informe algum numero: ";
  std::cin >> num;

  if (num % 2 != 0) { 
    std::cout << "O numero eh impar \n";
  } else {
    std::cout << "O numero eh par \n";
  }

  return 0;
}
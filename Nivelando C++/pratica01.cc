#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função que realiza uma operação matemática simples
int soma(int a, int b) {
    return a + b;
}

// Função para exibir um vetor de inteiros
void exibirVetor(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    // Tipos de variáveis
    int inteiro = 10;
    float decimal = 5.5;
    double grandeDecimal = 10.123456;
    char caractere = 'A';
    bool booleano = true;
    string texto = "Olá, C++!";

    // Vetor de inteiros
    vector<int> numeros = {1, 2, 3, 4, 5};

    // Entrada de dados
    int num1, num2;
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    // Condicional if-else
    if (num1 > num2) {
        cout << num1 << " é maior que " << num2 << "\n";
    } else if (num1 < num2) {
        cout << num1 << " é menor que " << num2 << "\n";
    } else {
        cout << "Os números são iguais." << "\n";
    }

    // Operação aritmética
    int resultado = soma(num1, num2);
    cout << "A soma de " << num1 << " e " << num2 << " é: " << resultado << "\n";

    // Estruturas de repetição
    cout << "Usando for: ";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << "\n";

    cout << "Usando while: ";
    int contador = 0;
    while (contador < 5) {
        cout << contador << " ";
        contador++;
    }
    cout << "\n";

    cout << "Usando do-while: ";
    int contador2 = 0;
    do {
        cout << contador2 << " ";
        contador2++;
    } while (contador2 < 5);
    cout << "\n";

    // Exibir informações
    cout << "Variáveis: " << "\n";
    cout << "Inteiro: " << inteiro << "\n";
    cout << "Float: " << decimal << "\n";
    cout << "Double: " << grandeDecimal << "\n";
    cout << "Char: " << caractere << "\n";
    cout << "Booleano: " << booleano << "\n";
    cout << "String: " << texto << "\n";
    
    // Exibir vetor
    cout << "Vetor de números: ";
    exibirVetor(numeros);

    return 0;
}
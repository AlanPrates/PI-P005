/*
Escreva um programa que:
a. Peça ao usuário para fornecer um número inteiro, obtenha-o da
entrada padrão, usando cin, e armazene numa variável de tipo int;
b. Determine se o valor fornecido pode ser representado, sem perda de
informação, como um short int. Imprima na tela o valor
fornecido, seguido das palavras “e maior que um short int”
ou “este valor pertence ao intervalo dos short
int”. Use apenas o operador condicional (?).
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    int valor;

    // Solicita ao usuário que forneça um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> valor;

    // Determina se o valor pode ser representado como um short int
    string mensagem = (valor > numeric_limits<short>::max() || valor < numeric_limits<short>::min()) ? "e maior que um short int" : "este valor pertence ao intervalo dos short int";

    // Imprime o resultado
    cout << "O valor fornecido (" << valor << ") " << mensagem << "." << endl;

    return 0;
}


/*Escreva um programa que:
a. Peça ao usuário para fornecer um número inteiro, obtenha-o da
entrada padrão, usando cin, e armazene numa variável de tipo int;
b. Determine se o valor fornecido pode ser representado, sem perda de
informação, como um short int. Imprima na tela o valor
fornecido, seguido das palavras “e maior que um short int”
ou “este valor pertence ao intervalo dos short
int”. Use apenas o operador condicional (?).*/
#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "O número " << numero << " " << ((numero >= SHRT_MIN && numero <= SHRT_MAX) ? 
    "pertence ao intervalo dos short int." : "é maior que um short int.") << endl;

    return 0;
}

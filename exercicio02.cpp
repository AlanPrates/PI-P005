/*
Escreva um programa que:
a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e
ch3, mas você pode escolher outro identificador se achar mais
apropriado;
b. Peça ao usuário para digitar um caractere, obtenha o mesmo da
entrada padrão utilizando cin, e atribua o valor digitado à variável
ch1;
c. Verifique, utilizando o operador condicional (?) se se trata de:
i. uma letra maiúscula;
ii. uma letra minúscula;
iii. um dígito;
iv. outro tipo de caractere;
d. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta;
e. Atribua à variável ch2 o caractere 81, identifique e imprima na tela,
utilizando cout, o caractere em formato numérico decimal, octal,
hexadecimal e como caractere;
f. Dado que o caractere ch2 é uma letra maiúscula, atribua à variável
ch3 o caractere que corresponde à mesma letra minúscula (não pode
procurar na tabela ASCII) e Imprima ch3 na tela, utilizando cout, em
formato numérico decimal, octal, hexadecimal e como caractere;
*/
#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Solicita ao usuário que digite dois caracteres
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // Parte (c): Encontra o caractere anterior a ch1 e imprimir em diferentes formatos
    ch3 = (ch1 - 1 < ' ') ? '_' : ch1 - 1;
    cout << "Caractere anterior a ch1: " << static_cast<int>(ch3) << " (Decimal), "
              << oct << static_cast<int>(ch3) << " (Octal), "
              << hex << static_cast<int>(ch3) << " (Hexadecimal), "
              << ch3 << " (Caractere)" << endl;

    // Parte (d): Encontra o caractere anterior a ch2 e imprimir em diferentes formatos
    ch3 = (ch2 - 1 < ' ') ? '_' : ch2 - 1;
    cout << "Caractere anterior a ch2: " << static_cast<int>(ch3) << " (Decimal), "
              << oct << static_cast<int>(ch3) << " (Octal), "
              << hex << static_cast<int>(ch3) << " (Hexadecimal), "
              << ch3 << " (Caractere)" << endl;

    // Parte (e): Atribui 'A' ou espaço a ch3 com base em ch1
    ch3 = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : ' ';
    cout << "ch3 com base em ch1: " << ch3 << endl;

    // Parte (f): Atribui 'a' ou espaço a ch3 com base em ch2
    ch3 = (ch2 >= 'a' && ch2 <= 'z') ? 'a' : ' ';
    cout << "ch3 com base em ch2: " << ch3 << endl;

    // Parte (g): Atribui '1' ou espaço a ch3 com base em ch1 ou ch2 sendo dígito
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "ch3 com base em ch1 ou ch2 sendo dígito: " << ch3 << endl;

    return 0;
}

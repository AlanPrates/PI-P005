/*Operações com caracteres
● Escreva um programa que:
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
formato numérico decimal, octal, hexadecimal e como caractere;*/

#include <iostream>

using namespace std;

int main() {

    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

    string tipo;
    tipo = (isupper(ch1)) ? "letra maiúscula" :
           (islower(ch1)) ? "letra minúscula" :
           (isdigit(ch1)) ? "dígito" : "outro tipo de caractere";

    cout << "Você digitou " << ch1 << " que é " << tipo << endl;

    ch2 = 81;

    cout << "Caractere em decimal: " << static_cast<int>(ch2) << endl;
    cout << "Caractere em octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Caractere em hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Caractere: " << ch2 << endl;

    ch3 = tolower(ch2);
   
    cout << "Caractere minúsculo em decimal: " << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo em octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo em hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo: " << ch3 << endl;

    return 0;
}

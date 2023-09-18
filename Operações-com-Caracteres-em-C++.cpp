#include <iostream>
using namespace std;

int main() {
    // a. Declare três variáveis de tipo char
    char ch1, ch2, ch3;

    // b. Peça ao usuário para digitar um caractere e atribua o valor à variável ch1
    cout << "Digite um caractere: ";
    cin >> ch1;

    // c. Verifique o tipo de caractere
    string tipo;
    tipo = (isupper(ch1)) ? "letra maiúscula" :
           (islower(ch1)) ? "letra minúscula" :
           (isdigit(ch1)) ? "dígito" : "outro tipo de caractere";

    cout << "O caractere digitado é " << tipo << "." << endl;

    // e. Atribua à variável ch2 o caractere 81
    ch2 = 81;

    // Imprima ch2 em diferentes formatos
    cout << "Em formato decimal: " << int(ch2) << endl;
    cout << "Em formato octal: " << oct << int(ch2) << endl;
    cout << "Em formato hexadecimal: " << hex << int(ch2) << endl;
    cout << "Como caractere: " << ch2 << endl;

    // f. Atribua à variável ch3 o caractere minúsculo correspondente
    ch3 = tolower(ch2);

    // Imprima ch3 em diferentes formatos
    cout << "Em formato decimal: " << int(ch3) << endl;
    cout << "Em formato octal: " << oct << int(ch3) << endl;
    cout << "Em formato hexadecimal: " << hex << int(ch3) << endl;
    cout << "Como caractere: " << ch3 << endl;

    return 0;
}

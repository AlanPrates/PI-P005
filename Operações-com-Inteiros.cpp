#include <iostream>
using namespace std;

int main() {
    // a. Declare três variáveis de tipo int
    int a, b, c;

    // b. Peça ao usuário para digitar dois números inteiros e atribua às variáveis a e b
    cout << "Digite dois números inteiros (a e b): ";
    cin >> a >> b;

    // c. Atribua à variável c a soma de a e b e imprima o resultado em formato hexadecimal
    c = a + b;
    cout << "A soma de a e b em hexadecimal: " << hex << c << endl;

    // d. Atribua à variável c o produto de a e b e imprima o resultado em formato octal
    c = a * b;
    cout << "O produto de a e b em octal: " << oct << c << endl;

    // e. Atribua à variável c o módulo (valor absoluto) da diferença entre a e b e imprima o resultado
    c = abs(a - b);
    cout << "O módulo da diferença entre a e b: " << c << endl;

    // g. Atribua à variável c o quociente entre a e b e imprima o resultado
    if (b != 0) {
        c = a / b;
        cout << "O quociente entre a e b: " << c << endl;

        // h. Verificar se a é divisível de forma exata por b e mostrar o resultado
        string divisivel = (a % b == 0) ? "É divisível" : "Não é divisível";
        cout << divisivel << " de forma exata por b." << endl;
    } else {
        cout << "A divisão por zero não é possível." << endl;
    }

    return 0;
}

/*
Escreva um programa, usando quando necessário o operador (?), que:
a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas
você pode escolher outro identificador se achar mais apropriado;
b. Peça ao usuário para digitar dois números inteiros, obtenha-os da
entrada padrão, usando cin, e atribua os valores digitados às
variáveis a e b respectivamente;
c. Atribua à variável c a somas das variáveis a e b, imprima o resultado
na tela em formato hexadecimal;
d. Atribua à variável c o produto das variáveis a e b, imprima o
resultado na tela em formato octal;
e. Atribua à variável c o módulo (valor absoluto) da diferença entre as
variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0
retorna -c, caso contrário retorna c)
f.
Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta;
g. Atribua à variável c o quociente entre variáveis a e b, imprima o
resultado na tela; (se b for igual a zero a divisão não é possível e um
aviso deve ser apresentado ao usuário);
h. Se a divisão anterior for possível, determinar se a é divisível de forma
exata por b, mostrar o resultado na tela;
*/

#include <iostream>
#include <iomanip> // Para formatar a saída hexadecimal e octal

using namespace std;

int main() {
    int a, b, c;

    // Solicita ao usuário que digite dois números inteiros
    cout << "Digite o primeiro número inteiro (a): ";
    cin >> a;
    cout << "Digite o segundo número inteiro (b): ";
    cin >> b;

    // Parte (c): Soma das variáveis a e b e imprime em formato hexadecimal
    c = a + b;
    cout << "Soma (a + b) em formato hexadecimal: " << hex << c << endl;

    // Parte (d): Produto das variáveis a e b e imprime em formato octal
    c = a * b;
    cout << "Produto (a * b) em formato octal: " << oct << c << endl;

    // Parte (e): Valor absoluto da diferença entre as variáveis a e b
    c = (a - b < 0) ? -(a - b) : (a - b);
    cout << "Valor absoluto da diferença (|a - b|): " << c << endl;

    // Parte (g): Quociente da divisão entre a e b (com verificação de divisão por zero)
    if (b != 0) {
        c = a / b;
        cout << "Quociente da divisão (a / b): " << c << endl;
        
        // Parte (h): Verifica se a é divisível de forma exata por b
        if (a % b == 0) {
            cout << "a é divisível por b de forma exata." << endl;
        } else {
            cout << "a não é divisível por b de forma exata." << endl;
        }
    } else {
        cout << "Divisão por zero não é possível." << endl;
    }

    return 0;
}

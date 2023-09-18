/*Escreva um programa, usando quando necessário o operador (?), que:
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
f. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta;
g. Atribua à variável c o quociente entre variáveis a e b, imprima o
resultado na tela; (se b for igual a zero a divisão não é possível e um
aviso deve ser apresentado ao usuário);
h. Se a divisão anterior for possível, determinar se a é divisível de forma
exata por b, mostrar o resultado na tela;*/

#include <iostream>

using namespace std;

int main()
{

    int a, b, c;

    cout << "Digite o primeiro número inteiro (a): ";
    cin >> a;
    cout << "Digite o segundo número inteiro (b): ";
    cin >> b;

    c = a + b;
    cout << "Soma (em hexadecimal): " << hex << c << endl;

    c = a * b;
    cout << "Produto (em octal): " << oct << c << endl;

    if (a >= b)
    {
        c = a - b;
    }
    else
    {
        c = b - a;
    }
    cout << "Módulo da diferença: " << c << endl;

    if (b != 0)
    {

        c = a / b;
        cout << "Quociente: " << c << endl;

        if (a % b == 0)
        {
            cout << "a é divisível por b de forma exata." << endl;
        }
        else
        {
            cout << "a não é divisível por b de forma exata." << endl;
        }
    }
    else
    {
        cout << "Divisão por zero não é possível." << endl;
    }

    return 0;
}

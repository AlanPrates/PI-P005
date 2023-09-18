#include <iostream>
using namespace std;

int main() {
    int valor;

    cout << "Digite um número inteiro: ";
    cin >> valor;

    string mensagem = (valor > SHRT_MAX || valor < SHRT_MIN) ? "e maior que um short int" : "este valor pertence ao intervalo dos short int";

    cout << valor << " " << mensagem << endl;

    return 0;
}

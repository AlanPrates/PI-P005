/*
Escreva um programa que:
a. Declare três variáveis de tipo double, vamos chamar de x, y e z
mas você pode escolher outro identificador se achar mais apropriado;
b. Peça ao usuário para digitar dois números de ponto flutuante,
obtenha-os da entrada padrão, usando cin, e atribua os valores
digitados às variáveis x e y respectivamente;
c. Considerando que x e y são coordenadas num plano cartesiano,
identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda,
direita ou na curva). Imprima o resultado na tela;
d. Atividade avançada: Atribua à variável z o valor da distância
euclidiana do ponto (x, y) ao centro de coordenadas; (distância
euclidiana se calcula como 𝑥2 + 𝑦2, (pesquise na biblioteca padrão
como determinar a raiz quadrada de um número)
e. Atribua à variável z o produto entre as variáveis x e y, imprima o
resultado na tela em notação científica;
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, y, z;

    // Solicita ao usuário que digite dois números de ponto flutuante
    cout << "Digite a coordenada x: ";
    cin >> x;
    cout << "Digite a coordenada y: ";
    cin >> y;

    // Parte (c): Identificar em que lado da curva f(x) = 5x + 2 o ponto se encontra
    double fx = 5 * x + 2;
    if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está à esquerda da curva f(x) = 5x + 2." << endl;
    } else if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está à direita da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está sobre a curva f(x) = 5x + 2." << endl;
    }

    // Parte (d): Calcular a distância euclidiana do ponto ao centro de coordenadas
    double distancia = sqrt(x * x + y * y);

    // Parte (e): Calcular o produto entre as variáveis x e y e imprimir em notação científica
    z = x * y;
    cout << fixed << setprecision(2);
    cout << "A distância euclidiana do ponto ao centro de coordenadas é: " << distancia << endl;
    cout << "O produto de x e y em notação científica é: " << scientific << z << endl;

    return 0;
}

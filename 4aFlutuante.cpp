/*Escreva um programa que:
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
euclidiana se calcula como sqrt(x ^ 2 + y ^ 2) , (pesquise na biblioteca padrão 2 como determinar a raiz quadrada de um número)
e. Atribua à variável z o produto entre as variáveis x e y, imprima o
resultado na tela em notação científica*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    double fx = 5 * x + 2;

    string lado = (y > fx) ? "acima da curva" : (y < fx) ? "abaixo da curva"
                                                         : "na curva";

    cout << "O ponto (" << x << ", " << y << ") está " << lado << " de f(x) = 5x + 2." << endl;

    z = sqrt(x * x + y * y);

    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é " << z << "." << endl;

    double produto = x * y;
    cout << "O produto de x e y em notação científica: " << scientific << produto << endl;

    return 0;
}

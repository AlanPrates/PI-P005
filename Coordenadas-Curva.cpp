#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;

    // b. Peça ao usuário para digitar dois números de ponto flutuante e atribua às variáveis x e y
    cout << "Digite as coordenadas (x y): ";
    cin >> x >> y;

    // c. Identifique em que lado da curva f(x) = 5x + 2 se encontra
    double f_x = 5 * x + 2;
    string lado = (y > f_x) ? "acima da curva" :
                  (y < f_x) ? "abaixo da curva" : "na curva";
    cout << "O ponto está " << lado << "." << endl;

    // d. Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas
    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "A distância ao centro de coordenadas é: " << z << endl;

    // e. Atribua à variável z o produto entre x e y e imprima o resultado em notação científica
    z = x * y;
    cout << "O produto de x e y em notação científica: " << scientific << z << endl;

    return 0;
}

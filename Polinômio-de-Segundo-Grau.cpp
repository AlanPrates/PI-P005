#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x;

    // a. Leia os coeficientes a, b e c
    cout << "Digite os coeficientes a, b e c do polinômio (a b c): ";
    cin >> a >> b >> c;

    // Calcula o discriminante
    double discriminante = b*b - 4*a*c;

    if (discriminante > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
        double raiz1 = (-b + sqrt(discriminante)) / (2*a);
        double raiz2 = (-b - sqrt(discriminante)) / (2*a);
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        cout << "O polinômio tem uma raiz real." << endl;
        double raiz = -b / (2*a);
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    // b. Leia um valor para x e imprima o valor de p(x)
    cout << "Digite um valor para x: ";
    cin >> x;
    double resultado = a*pow(x, 2) + b*x + c;
    cout << "p(x) = " << resultado << endl;

    return 0;
}

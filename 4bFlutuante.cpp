/*Escreva um programa que:
a. leia da entrada padrão os valores reais dos coeficientes a, b e c, de um
polinômio de segundo grau do tipo 𝑝(𝑥) = 𝑎𝑥 , e imprima: 2
+ 𝑏𝑥 + 𝑐
i. Se o polinômio tem uma, duas ou nenhuma raiz real (lembre
das suas aulas de segundo grau qual a condição que define
qual o número de raízes de um polinômio);
ii. Se tiver raízes (uma ou duas) imprima o valor das mesmas. No
exercício anterior você deve ter descoberto como calcular a
raiz quadrada de um número;
b. Leia da entrada padrão um valor para x e imprima o valor de p(x);*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double a, b, c;

    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0)
    {

        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "O polinômio tem duas raízes reais distintas." << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }
    else if (discriminante == 0)
    {

        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real (raiz dupla): " << raiz << endl;
    }
    else
    {

        cout << "O polinômio não tem raízes reais." << endl;
    }

    double x;
    cout << "Digite um valor para x: ";
    cin >> x;

    double px = a * x * x + b * x + c;
    cout << "O valor de p(x) para x = " << x << " é: " << px << endl;

    return 0;
}

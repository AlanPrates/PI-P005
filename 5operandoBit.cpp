/*Uma pesquisa monitora 8 genes de uma planta para avaliar como cada um
deles influencia na resposta a uma determinada praga. Os pesquisadores
optaram por representar a informação dos genes de cada planta com um
inteiro sem sinal, onde cada bit da representação binária identifica se um
gene está presente (1) ou não (0) naquela planta. Implemente um programa
que:
a. Leia a informação genética de uma planta na forma de um caractere
sem sinal (unsigned char);
b. Utilizando os operadores bit a bit identifique quantos, dos genes
estudados, estão presentes;
c. Solicite do usuário a informação sobre qual gene específico ele que
informação (um valor inteiro entre 1 e 8) e retorne se este gene se
encontra nesta planta.*/

#include <iostream>

using namespace std;

int main()
{

    unsigned char informacaoGenetica;

    cout << "Digite a informacao genetica da planta (um caractere sem sinal): ";
    cin >> informacaoGenetica;

    int genesPresentes = 0;

    for (int i = 0; i < 8; i++)
    {
        if ((informacaoGenetica & (1 << i)) != 0)
        {
            genesPresentes++;
        }
    }

    cout << "A planta possui " << genesPresentes << " genes presentes." << endl;

    int geneDesejado;
    cout << "Informe o gene desejado (um valor entre 1 e 8): ";
    cin >> geneDesejado;

    bool geneEstaPresente = ((informacaoGenetica & (1 << (geneDesejado - 1))) != 0);

    if (geneEstaPresente)
    {
        cout << "O gene " << geneDesejado << " esta presente na planta." << endl;
    }
    else
    {
        cout << "O gene " << geneDesejado << " nao esta presente na planta." << endl;
    }

    return 0;
}

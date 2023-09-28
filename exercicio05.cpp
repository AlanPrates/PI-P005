/*
Uma pesquisa monitora 8 genes de uma planta para avaliar como cada um
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
encontra nesta planta.
*/

#include <iostream>

using namespace std;

int main() {
    unsigned char informacaoGenetica;

    // Leitura da informação genética da planta como um caractere sem sinal
    cout << "Digite a informacao genetica da planta (um valor entre 0 e 255): ";
    cin >> informacaoGenetica;

    // Identifica quantos genes estão presentes usando operadores bit a bit
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if (informacaoGenetica & (1 << i)) {
            genesPresentes++;
        }
    }

    cout << "Numero de genes presentes nesta planta: " << genesPresentes << endl;

    //Solicita ao usuário qual gene específico ele quer verificar
    
    cout << "Digite o numero do gene que você deseja verificar (1 a 8): \n";
    int geneEspecifico;
    cin >> geneEspecifico;

    //Verifica se o gene especificado está presente na planta
    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        bool estaPresente = (informacaoGenetica & (1 << (geneEspecifico - 1))) != 0;
        if (estaPresente) {
            cout << "O gene " << geneEspecifico << " esta presente nesta planta." << endl;
        } else {
            cout << "O gene " << geneEspecifico << " não esta presente nesta planta." << endl;
        }
    } else {
        cout << "Numero de gene invalido. Digite um valor entre 1 e 8." << endl;
        
    }

    return 0;
}

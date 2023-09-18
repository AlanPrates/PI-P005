#include <iostream>
using namespace std;

int main() {
    // a. Leia a informação genética de uma planta na forma de um caractere sem sinal (unsigned char)
    unsigned char infoGenetica;
    cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    cin >> infoGenetica;

    // b. Identifique quantos genes estão presentes
    int contadorGenes = 0;

    for (int i = 0; i < 8; i++) {
        // Use o operador bit a bit "&" para verificar se o gene está presente (bit igual a 1)
        if (infoGenetica & (1 << i)) {
            contadorGenes++;
        }
    }

    cout << "Número de genes presentes na planta: " << contadorGenes << endl;

    // c. Solicite do usuário o número do gene específico
    int numeroGene;
    cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    cin >> numeroGene;

    // Verifique se o gene especificado está presente
    if (numeroGene >= 1 && numeroGene <= 8) {
        bool presente = infoGenetica & (1 << (numeroGene - 1));
        cout << "O gene " << numeroGene << " está presente na planta? " << (presente ? "Sim" : "Não") << endl;
    } else {
        cout << "Número de gene inválido. Deve estar entre 1 e 8." << endl;
    }

    return 0;
}

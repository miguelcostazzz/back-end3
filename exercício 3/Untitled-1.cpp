#include <iostream>

using namespace std;

int main() {
    const int tamanho = 20;
    int vetor[tamanho];
    int pares = 0, impares = 0, maiores50 = 0, menores7 = 0;

    // Leitura do vetor
    cout << "Digite 20 elementos para o vetor:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];

        // Contagem de números pares
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Contagem de números maiores que 50
        if (vetor[i] > 50) {
            maiores50++;
        }

        // Contagem de números menores que 7
        if (vetor[i] < 7) {
            menores7++;
        }
    }

    // Exibição dos resultados
    cout << "\nResultados:\n";
    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;
    cout << "Quantidade de números maiores que 50: " << maiores50 << endl;
    cout << "Quantidade de números menores que 7: " << menores7 << endl;

    return 0;
}
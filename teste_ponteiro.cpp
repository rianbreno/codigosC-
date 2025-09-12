#include <iostream>

int main() {
    int numNotas;

    // 1. Solicita a quantidade de notas ao usuário
    std::cout << "Quantas notas voce deseja armazenar? ";
    std::cin >> numNotas;

    // 2. Alocacao dinamica de memoria usando 'new'
    // 'pNotas' e um ponteiro que aponta para o primeiro elemento do array alocado
    int* pNotas = new int[numNotas];

    // 3. Preenche o array com as notas
    std::cout << "Digite as " << numNotas << " notas:" << std::endl;
    for (int i = 0; i < numNotas; ++i) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> pNotas[i];
    }

    // 4. Exibe as notas armazenadas
    std::cout << "\n--- Notas Armazenadas ---" << std::endl;
    for (int i = 0; i < numNotas; ++i) {
        std::cout << "Nota " << i + 1 << ": " << pNotas[i] << std::endl;
    }

    // 5. Libera a memoria usando 'delete[]'
    // Isso evita "vazamento de memoria" (memory leak)
    delete[] pNotas;
    pNotas = nullptr; // Define o ponteiro para nullptr para evitar "ponteiro pendente"

    return 0;
}
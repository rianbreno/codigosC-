#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;
    int soma = 0;
    float media;

    for (int i=1; i <= 10; i++) {
        cout << "Informe a " << i << " nota: ";
        cin >> numero;
        soma = soma + numero;
    }

    media = soma / 10;

    cout << "A media dos numeros e: " << media;

    return 0;
}
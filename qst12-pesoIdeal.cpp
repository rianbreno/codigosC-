#include <iostream>

using namespace std;

int main() {
    float altura, pesoIdeal;
    char sexo;

    cout << "Digite sua altura em metros (ex: 1.75): ";
    cin >> altura;

    cout << "Digite seu sexo (M para masculino ou F para feminino): ";
    cin >> sexo;

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        cout << "Seu peso ideal e: " << pesoIdeal << " kg" << endl;
    } 
    else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        cout << "Seu peso ideal e: " << pesoIdeal << " kg" << endl;
    } 
    else {
        cout << "Sexo inválido. Por favor, digite M ou F" << endl;
    }

    return 0;
}
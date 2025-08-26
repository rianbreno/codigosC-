#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, resultado;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    if (num1 > 0 & num2 > 0) {
        resultado = (num1 + num2) * 3;
        cout << "Ambos os numeros ao positivos, resultado: " << resultado << endl;
    } else {
        cout << "Pelo menos um dos numeros nao e positivo";
    }

}
#include <iostream>
#include <string>

using namespace std;

int main() {
    float num1, num2;

    cout << "Informe o primeiro numero: ";
    cin >> num1;

    cout << "Informe o segundo numero: ";
    cin >> num2;

    if (num1 > num2 ){
        cout << "O primeiro numero e maior, numero: " << num1;
      } else if (num2 > num1) {
        cout << "O segundo numero e maior, numero: " << num2;
        } else {
        cout << "Os numeros sao iguais";
    }
    return 0;
}
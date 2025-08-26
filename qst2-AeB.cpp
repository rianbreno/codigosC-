#include <iostream>
using namespace std;

int main() {

    int A, B, temp;

    cout << "Digite o valor para a A: ";
    cin >> A;

    cout << "Digite o valor para B: ";
    cin >> B;

    temp = A;
    A = B;
    B = temp;

    cout << "Os valores trocados: " << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    float num;

    cout << "Digite a numero: ";
    cin >> num;

    if (num > 0 ){
        cout << "A metade do numero e " << num/2 << endl;
    } else {
        cout << "Numero ao quadrado " << num * num << endl;
    }

    return 0;
}
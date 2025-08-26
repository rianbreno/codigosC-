#include <iostream>
#include <string>

using namespace std;

int main() {
    float valorAvista;
    int opcao;
    float valorFinal;

    cout << "Digite o valor da compra a vista: ";
    cin >> valorAvista;

    cout << "Opcoes de pagamento: ";
    cout << endl << "1 - Pagamento a vista" << endl;
    cout << "2 - Em 2 vezes (acrescimo de 10%)" << endl;
    cout << "3 - Em 3 vezes (acrescimo de 20%)" << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcao;

    switch (opcao) {
        case 1:
            valorFinal = valorAvista;
            cout << "O valor final e: " << valorFinal << endl;
            break;
        case 2:
            valorFinal = valorAvista * 1.10;
            cout << "O valor final a ser pago em 2 vezes e: " << valorFinal << endl;
            cout << "Cada parcela tera o valor de: " << valorFinal / 2 << endl;
            break;
        case 3:
            valorFinal = valorAvista * 1.20;
            cout << "O valor final a ser pago em 3 vezes e: " << valorFinal << endl;
            cout << "Cada parcela tera o valor de: " << valorFinal / 3 << endl;
            break;
        default:
            cout << "Opcao invalida, escolha uma opção valida 1,2 ou 3 " << endl;
            break;
    }
}
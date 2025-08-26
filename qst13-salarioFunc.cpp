#include <iostream>
#include <string>

using namespace std;

int main() {
    float salario, valorBonus;
    int tempoServico;

    cout << "Informe o salario do funcionario: ";
    cin >> salario;

    cout << "Informe o tempo de servico em anos: ";
    cin >> tempoServico;

    if (tempoServico >= 5) {
        valorBonus = salario * 0.20;
    } else {
        valorBonus = salario * 0.10;
    }

    cout << "O valor do bonus recebido pelo funcionario e: R$" << valorBonus << endl;

    return 0;
}
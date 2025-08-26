#include <iostream>
using namespace std;

int main() {

    float salarioMinimo, salarioPessoa, quantSalariosMinimos, descontoVale;

    cout << "Digite o valor do salario minimo: ";
    cin >> salarioMinimo;

    cout << "Digite o valor do salario da pessoa: ";
    cin >> salarioPessoa;

    quantSalariosMinimos = salarioPessoa / salarioMinimo;

    descontoVale = salarioPessoa * 0.08;

    cout << "Voce ganha " << quantSalariosMinimos << " salarios minimos" << endl;
    cout << "O desconto de vale-transporte e: " << descontoVale << endl;

    return 0;
}
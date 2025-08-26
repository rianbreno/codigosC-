#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    float salarioBruto, descontoPrevidencia, salarioLiquido;

    cout << "Informe o nome do funcionario: ";
    cin >> nome;

    cout << "Informe o salario bruto do funcionario: ";
    cin >> salarioBruto;

    descontoPrevidencia = salarioBruto * 0.10;
    salarioLiquido = salarioBruto - descontoPrevidencia;

    cout << "Funcionario: " << nome << endl;
    cout << "Salario bruto: "<< salarioBruto << endl;
    cout << "Salario liquido: " << salarioLiquido << endl;
    cout << "Desconto da previdencia: " << descontoPrevidencia << endl;

    return 0;
}
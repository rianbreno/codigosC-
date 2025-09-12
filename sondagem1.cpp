#include <iostream>

using namespace std;

int main() {
    float salarioAtual, novoSalario;
    int opcao, continuar;

    do {
        cout << ">>> CALCULO DE AUMENTO SALARIAL <<<" << endl;
        cout << "Informe seu salario atual: ";
        cin >> salarioAtual;

        cout << "Informe seu cargo: ";
        cout << endl << "101 - Gerente" << endl;
        cout << "102 - Engenheiro " << endl;
        cout << "103 - Outro cargo" << endl;
        cout << "Escolha uma opcao: " << endl;
        cin >> opcao;

        switch (opcao) {
            case 101:
                novoSalario = salarioAtual * 1.10;
                cout << "Seu salario antigo era: R$ " << salarioAtual << endl;
                cout << "Seu novo salario e: R$ " << novoSalario << endl;
                break;
            case 102:
                novoSalario = salarioAtual * 1.20;
                cout << "Seu salario antigo era: R$ " << salarioAtual << endl;
                cout << "Seu novo salario e: R$ " << novoSalario << endl;
                break;
            case 103:
                novoSalario = salarioAtual * 1.40;
                cout << "Seu salario antigo era: R$ " << salarioAtual << endl;
                cout << "Seu novo salario e: R$ " << novoSalario << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }

                cout << "Deseja continuar o calculo p/ outro funcionario?, \ndigite 1 p/ CONTINUAR e 0 p/ ENCERRAR: ";
                cin >> continuar;

        } while (continuar == 1);
        cout << "Programa encerrado" << endl;

        return 0;
    }
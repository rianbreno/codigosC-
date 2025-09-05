#include <iostream>
#include <string>

using namespace std;

struct Funcionario {
    string nome, cargo;
    float salarioAtual;
    float novoSalario;
};

int main() {
    Funcionario funcionarios[3];
    int continuar = 1;
    int numFuncionarios = 0;
    int numGerentes = 0;
    int numEngenheiros = 0;
    float custoTotalAtual = 0.0;
    float custoTotalNovo = 0.0;

    cout << ">>> CADASTRO DE FUNCIONARIOS E CALCULO DE AUMENTO SALARIAL <<<" << endl;

    do {

        if (numFuncionarios >= 3) {
            cout << "Limite de 3 funcionarios atingido." << endl;
            break;
        }

        int opcaoCargo;

        cout << "Dados do funcionario " << numFuncionarios + 1 << endl;
        cout << "Informe o nome: ";
        cin >> funcionarios[numFuncionarios].nome;

        cout << "Informe o salario atual: R$ ";
        cin >> funcionarios[numFuncionarios].salarioAtual;

        cout << "Informe o cargo: " << endl;
        cout << "101 - Gerente" << endl;
        cout << "102 - Engenheiro" << endl;
        cout << "103 - Outro cargo" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcaoCargo;

        switch (opcaoCargo) {
            case 101:
                funcionarios[numFuncionarios].novoSalario = funcionarios[numFuncionarios].salarioAtual * 1.10;
                numGerentes++;
                break;
            case 102:
                funcionarios[numFuncionarios].novoSalario = funcionarios[numFuncionarios].salarioAtual * 1.20;
                numEngenheiros++;
                break;
            case 103:
                funcionarios[numFuncionarios].novoSalario = funcionarios[numFuncionarios].salarioAtual * 1.40;
                break;
            default:
                cout << "Opcao de cargo invalida! O cargo sera definido como 'Outro'." << endl;
        }

        custoTotalAtual += funcionarios[numFuncionarios].salarioAtual;
        custoTotalNovo += funcionarios[numFuncionarios].novoSalario;
        numFuncionarios++;

        if (numFuncionarios < 3) {
            cout << "\nDeseja cadastrar outro funcionario? " << endl;
            cout << "Digite 1 para CONTINUAR ou 0 para ENCERRAR: ";
            cin >> continuar;
        } else {
            cout << "\nLimite de 3 funcionarios atingido. Encerrando o cadastro." << endl;
            continuar = 0;
    }

    } while (continuar == 1);

    cout << "\n--- RELATORIO FINAL ---" << endl;
    cout << "\n--- Dados dos Funcionarios Cadastrados ---" << endl;

    if (numFuncionarios == 0) {
        cout << "Nenhum funcionario foi cadastrado." << endl;
    } else {
        for (int i = 0; i < numFuncionarios; i++) {
            cout << "------------------------------------------" << endl;
            cout << "Nome: " << funcionarios[i].nome << endl;
            cout << "Salario Antigo: R$ " << funcionarios[i].salarioAtual << endl;
            cout << "Novo Salario: R$ " << funcionarios[i].novoSalario << endl;
            cout << "------------------------------------------" << endl;
        }
    }

    cout << "\n--- Estatisticas da Empresa ---" << endl;
    cout << "Numero de Gerentes: " << numGerentes << endl;
    cout << "Numero de Engenheiros: " << numEngenheiros << endl;
    cout << "Custo total atual com salarios: R$ " << custoTotalAtual << endl;
    cout << "Custo total apos o aumento: R$ " << custoTotalNovo << endl;

    cout << "\nPrograma encerrado." << endl;

    return 0;
}
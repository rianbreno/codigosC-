#include <iostream>
#include <string>

using namespace std;

const int maxFuncionarios = 10;
struct Funcionario {
    string nome;
    string cargo;
    float salarioAtual;
    float novoSalario;
};

Funcionario funcionarios[maxFuncionarios];
int numFuncionarios = 0;
float custoTotalAtual = 0.0;
float custoTotalNovo = 0.0;
int numGerentes = 0;
int numEngenheiros = 0;

const int GERENTE = 101;
const int ENGENHEIRO = 102;
const int OUTRO_CARGO = 103;

void calcularAumentoSalario(int i, int opcaoCargo) {
    float aumento;

    switch (opcaoCargo) {
        case GERENTE:
            aumento = 0.10;
            funcionarios[i].cargo = "Gerente";
            break;
        case ENGENHEIRO:
            aumento = 0.20;
            funcionarios[i].cargo = "Engenheiro";
            break;
        case OUTRO_CARGO:
            aumento = 0.40;
            funcionarios[i].cargo = "Outro Cargo";
            break;
        default:
            cout << "Opcao de cargo invalida!" << endl;
    }

    funcionarios[i].novoSalario = funcionarios[i].salarioAtual * (1 + aumento);
}

void contarCargos() {
    numGerentes = 0;
    numEngenheiros = 0;

    for (int i = 0; i < numFuncionarios; i++) {
        if (funcionarios[i].cargo == "Gerente") {
            numGerentes++;
        } else if (funcionarios[i].cargo == "Engenheiro") {
            numEngenheiros++;
        }
    }
    cout << "Numero de Gerentes: " << numGerentes << endl;
    cout << "Numero de Engenheiros: " << numEngenheiros << endl;
}

void calcularCustoTotal() {
    custoTotalAtual = 0.0;
    custoTotalNovo = 0.0;

    for (int i = 0; i < numFuncionarios; i++) {
        custoTotalAtual += funcionarios[i].salarioAtual;
        custoTotalNovo += funcionarios[i].novoSalario;
    }
}

void mostrarDadosFuncionarios() {
    if (numFuncionarios == 0) {
        cout << "Nenhum funcionario foi cadastrado." << endl;
    } else {
        cout << "\n--- Dados dos Funcionarios Cadastrados ---" << endl;
        for (int i = 0; i < numFuncionarios; i++) {
            cout << "Nome: " << funcionarios[i].nome << endl;
            cout << "Cargo: " << funcionarios[i].cargo << endl;
            cout << "Salario Antigo: R$ " << funcionarios[i].salarioAtual << endl;
            cout << "Novo Salario: R$ " << funcionarios[i].novoSalario << endl;
        }
        cout << "------------------------------------------" << endl;
    }
}

int main() {
    int continuar = 1;

    cout << ">>> CADASTRO DE FUNCIONARIOS E CALCULO DE AUMENTO SALARIAL <<<" << endl;

    do {
        if (numFuncionarios >= maxFuncionarios) {
            cout << "Limite de " << maxFuncionarios << " funcionarios atingido. Encerrando o cadastro." << endl;
            break;
        }

        int opcaoCargo;

        cout << "Dados do funcionario " << numFuncionarios + 1 << endl;
        cout << "Informe o nome: ";
        cin >> funcionarios[numFuncionarios].nome;

        cout << "Informe o salario atual: R$ ";
        cin >> funcionarios[numFuncionarios].salarioAtual;

        cout << "Informe o cargo: " << endl;
        cout << GERENTE << " - Gerente" << endl;
        cout << ENGENHEIRO << " - Engenheiro" << endl;
        cout << OUTRO_CARGO << " - Outro cargo" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcaoCargo;

        calcularAumentoSalario(numFuncionarios, opcaoCargo);
        numFuncionarios++;

        if (numFuncionarios < maxFuncionarios) {
            cout << "\nDeseja cadastrar outro funcionario? " << endl;
            cout << "Digite 1 para CONTINUAR ou 0 para ENCERRAR: ";
            cin >> continuar;
        }

    } while (continuar == 1);

    mostrarDadosFuncionarios();

    cout << "\n--- Estatisticas da Empresa ---" << endl;

    contarCargos();

    calcularCustoTotal();
    cout << "Custo total atual com salarios: R$ " << custoTotalAtual << endl;
    cout << "Custo total apos o aumento: R$ " << custoTotalNovo << endl;

    cout << "\n";
    return 0;
}
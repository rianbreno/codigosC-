#include <iostream>
#include <string>

using namespace std;

// Variáveis e estruturas globais
const int maxFuncionarios = 3;
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

// Constantes para os cargos
const int GERENTE = 101;
const int ENGENHEIRO = 102;
const int OUTRO_CARGO = 103;

// a) Função para calcular o novo salário e o aumento
void calcularAumentoSalario(int indice, int opcaoCargo) {
    float aumento;

    switch (opcaoCargo) {
        case GERENTE:
            aumento = 0.10;
            funcionarios[indice].cargo = "Gerente";
            break;
        case ENGENHEIRO:
            aumento = 0.20;
            funcionarios[indice].cargo = "Engenheiro";
            break;
        case OUTRO_CARGO:
            aumento = 0.40;
            funcionarios[indice].cargo = "Outro Cargo";
            break;
        default:
            aumento = 0.0;
            funcionarios[indice].cargo = "Outro Cargo";
            cout << "Opcao de cargo invalida! O cargo sera definido como 'Outro'." << endl;
    }

    funcionarios[indice].novoSalario = funcionarios[indice].salarioAtual * (1 + aumento);
}

// b) Função para calcular e mostrar o número de gerentes e engenheiros
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

// c) Função para calcular o custo total da empresa
void calcularCustoTotal() {
    custoTotalAtual = 0.0;
    custoTotalNovo = 0.0;

    for (int i = 0; i < numFuncionarios; i++) {
        custoTotalAtual += funcionarios[i].salarioAtual;
        custoTotalNovo += funcionarios[i].novoSalario;
    }
}

// d) Função para mostrar os dados de todos os funcionários
void mostrarDadosFuncionarios() {
    if (numFuncionarios == 0) {
        cout << "Nenhum funcionario foi cadastrado." << endl;
    } else {
        cout << "\n--- Dados dos Funcionarios Cadastrados ---" << endl;
        for (int i = 0; i < numFuncionarios; i++) {
            cout << "------------------------------------------" << endl;
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

        // Chama a função para calcular o aumento
        calcularAumentoSalario(numFuncionarios, opcaoCargo);

        numFuncionarios++;

        if (numFuncionarios < maxFuncionarios) {
            cout << "\nDeseja cadastrar outro funcionario? " << endl;
            cout << "Digite 1 para CONTINUAR ou 0 para ENCERRAR: ";
            cin >> continuar;
        }

    } while (continuar == 1);

    // Chama a função para mostrar os dados
    mostrarDadosFuncionarios();

    cout << "\n--- Estatisticas da Empresa ---" << endl;

    // Chama a função para contar os cargos
    contarCargos();

    // Chama a função para calcular o custo total
    calcularCustoTotal();
    cout << "Custo total atual com salarios: R$ " << custoTotalAtual << endl;
    cout << "Custo total apos o aumento: R$ " << custoTotalNovo << endl;

    cout << "\n";
    return 0;
}
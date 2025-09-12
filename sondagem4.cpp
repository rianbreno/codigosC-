#include <iostream>
#include <string>

using namespace std;

struct Cliente {
    string nome, cargo;
    int idade;
};

Cliente cadastrarCliente() {
    Cliente c;
    cout << "\n--- Sistema de Cadastro de Clientes ---" << endl;
    cout << "Informe o nome: ";
    cin >> c.nome;
    cout << "Informe a cargo: ";
    cin  >> c.cargo;
    cout << "Informe a idade: ";
    cin  >> c.idade;
    return c;
}

void exibirClientes(const Cliente lista[], int quantidade) {
    if (quantidade == 0) {
        cout << "\nNenhum cliente cadastrado." << endl;
        return;
    }
    
    cout << "\n--- Exibicao do Cadastro de Clientes ---" << endl;
    for (int j = 0; j < quantidade; ++j) {
        cout << "\n   CODIGO: " << j + 1 << endl;
        cout << "Nome: " << lista[j].nome << endl;
        cout << "Cargo: " << lista[j].cargo << endl;
        cout << "Idade: " << lista[j].idade << endl;
    }
}

int main() {
    const int NUM_CLIENTES = 50;
    Cliente clientes[NUM_CLIENTES];
    int quantidadeClientes = 0;
    int opcao;

    do {
        cout << "\n--- SISTEMA DE CADASTRO ---\n" << endl;
        cout << "1 - CADASTRAR CLIENTE" << endl;
        cout << "2 - EXIBIR CLIENTES" << endl;
        cout << "3 - SAIR" << endl;
        cout << "\nDigite a opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                if (quantidadeClientes < NUM_CLIENTES) {
                    clientes[quantidadeClientes] = cadastrarCliente();
                    quantidadeClientes++;
                } else {
                    cout << "\nCapacidade maxima de clientes atingida!" << endl;
                }
                break;
            case 2:
                exibirClientes(clientes, quantidadeClientes);
                break;
            case 3:
                cout << "\nEncerrando o sistema..." << endl;
                break;
            default:
                cout << "\nOpcao invalida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 3);

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

struct Cliente {
    string nome, email, cpf;
    int telefone;
};

bool validarCPF(string cpf) {
    if (cpf.length() != 11) {
        return false;
    }
    return true;
}

Cliente cadastroCliente() {
    Cliente c;
    cout << "---Sistema de Cadastro de Clientes---" << endl;
    cout << "Informe o nome: ";
    cin >> c.nome;
    cout << "Informe o email: ";
    cin >> c.email;

    do {
        cout << "Informe o CPF com 11 digitos: ";
        cin >> c.cpf;
        if (!validarCPF(c.cpf)) {
            cout << "ERRO: CPF invalido!" << endl;
        }
    } while (!validarCPF(c.cpf));

    cout << "Informe o telefone: ";
    cin >> c.telefone;
    return c;
}

void exibirCliente(const Cliente lista [], int quantidade) {
    if (quantidade == 0) {
        cout << "Nenhum cliente cadastrado!" << endl;
        return;
    }
    cout << "---Exibicao do Cadastro de Clientes---" << endl;
    for (int i = 0; i < quantidade; i++) {
        cout << "Nome: " << lista[i].nome << endl;
        cout << "Email: " << lista[i].email << endl;
        cout << "CPF: " << lista[i].cpf << endl;
        cout << "Telefone: " << lista[i].telefone << endl;
    }
}

void buscarCPF(Cliente cad[], int total) {
    if (total == 0) {
        cout << "Nenhum cliente cadastrado para buscar!" << endl;
        return;
    }

    string cpfBusca;
    cout << "Digite o CPF para busca: ";
    cin >> cpfBusca;

    bool encontrado = false;

    for (int j = 0; j < total; j++) {
        if (cad[j].cpf == cpfBusca) {
            cout << "\nCliente encontrado:" << endl;
            cout << "Nome: " << cad[j].nome << endl;
            cout << "CPF: " << cad[j].cpf << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Cliente com CPF " << cpfBusca << " nao encontrado." << endl;
    }
}

int main() {
    const int NUM_CLIENTES = 50;
    Cliente clientes[NUM_CLIENTES];
    int quantidadeClientes = 0;
    int opcao;

    do {
        cout << "\n---SISTEMA DE CADASTRO---" << endl;
        cout << "1 - CADASTRAR CLIENTE" << endl;
        cout << "2 - EXIBIR CLIENTE" << endl;
        cout << "3 - BUSCAR POR CPF" << endl;
        cout << "4 - SAIR" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                if (quantidadeClientes < NUM_CLIENTES) {
                    clientes[quantidadeClientes] = cadastroCliente();
                    quantidadeClientes++;
                } else {
                    cout << "Capacidade maxima atingida" << endl;
                }
                break;

            case 2:
                exibirCliente(clientes, quantidadeClientes);
                break;
            case 3:
                buscarCPF(clientes, quantidadeClientes);
                break;
            case 4:
                cout << "Encerrando sistema..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}
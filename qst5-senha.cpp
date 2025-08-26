#include <iostream>
#include <string>
using namespace std;

int main() {

    string senhaCorreta = "senha123";
    string senha;

    do {

        cout << "Digite a senha: ";
        getline(cin, senha);


        if (senha == senhaCorreta) {
            cout << "Acesso permitido! " << endl;
        } else {
            cout << "Senha invalida, Tente novamente  " << endl;
        }
    } while (senha != senhaCorreta);

    return 0;
}
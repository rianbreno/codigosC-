#include <iostream>
#include <string>

using namespace std;

int main() {
    string senhaCorreta = "senha 123";
    string senhaDigitada;
    int tentativasRestantes = 3;

    while (tentativasRestantes > 0) {
        cout << "Digite a senha (tentativas restantes: " << tentativasRestantes << "): ";
        getline(cin, senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            cout << "Acesso permitido" << endl;
            return 0;
        } else {
            cout << "Voce nao tem acesso ao sistema. Tente novamente." << endl;
            tentativasRestantes--; // a cada tentaiva vai diminuindo em 1
        }
    }

    cout << "Voce excedeu o numero de tentativas. Acesso negado." << endl;
    return 0;
}
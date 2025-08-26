#include <iostream>
using namespace std;

int main() {

    float nota1, nota2, nota3, mediaPond;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terced nota: ";
    cin >> nota3;

    mediaPond = (nota1*2 + nota2*3 + nota3*5) /10;

    cout << "Sua media ponderada e: " << mediaPond << endl;

    if (mediaPond >= 7 ){
        cout << "Aluno APROVADO!";
    } else {
        cout << "Aluno REPROVADO!";
    }
    return 0;
}
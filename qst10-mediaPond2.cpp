#include <iostream>
#include <string>

using namespace std;

int main() {
    float nota1, nota2, nota3, mediaFinal;

    cout << "Digite a primeira nota (peso 2): ";
    cin >> nota1;
    cout << "Digite a segunda nota (peso 3): ";
    cin >> nota2;
    cout << "Digite a terced nota (peso 5): ";
    cin >> nota3;

    mediaFinal = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    cout << "A media final do aluno e: " << mediaFinal << endl;

    if (mediaFinal >= 7.0) {
        printf("Situacao: APROVADO\n");
    } else if (mediaFinal >= 4.0) {
        printf("Situacao: EXAME FINAL\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}
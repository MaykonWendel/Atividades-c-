#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, geral, media;
    cout << "\nInforme as 3 notas do aluno: ";
    cin >> n1 >> n2 >> n3;
    cout << endl;

    media = (n1+ n2+ n3)/3;

    cout << "A média do aluno é: " << media;
    cout << endl;

    cout << "\nInforme a média geral da turma: ";
    cin >> geral;
    cout << endl;

    if(media < geral){
        cout << "A média do aluno é inferior a média da turma!\n";
    }else if(media == geral){
        cout << "A média do aluno é igual a média da turma!\n";
    }else if(media > geral){
        cout << "A média do aluno é superior a média da turma!\n";
    }

    return 0;
} 
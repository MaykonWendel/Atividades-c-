#include <iostream>

using namespace std;

int main(){
    int idade;
    float renda;

    cout << "\nQual sua idade: ";
    cin >> idade;

    cout << "Qual sua renda: ";
    cin >> renda;

    if( idade >= 21 && renda <= 1200){
        cout << "Parabéns! Você pode participar do programa!\n";
    }else{
        cout << "Você nao pode participar do programa!\n";
    }

        return 0;
}


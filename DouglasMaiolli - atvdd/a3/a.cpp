#include <iostream>

using namespace std;

float potencia(float x, float y){
    float pot = 1;
    int cont = 1;
    while(cont <= y){
        pot *= x;
        cont++;
    }
    return pot;
}

int main(){

    int e, op;
    float b;

    while(1){
    cout << "\nDigite o número da base: ";
    cin >> b;

    cout << "Digite o número do expoente: ";
    cin >> e;

    float respot = potencia(b,e);
    
    cout << "O resultado da potência é:" << respot << endl;

    cout << "\nDeseja fazer outra potênciação?\n Não= 0\n Sim = 1" << endl;
    cin >> op;
    if(op == 0){
        break;
    }

    }
    
    return 0;
}

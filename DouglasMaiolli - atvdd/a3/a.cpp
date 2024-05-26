#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int e, op;
    float b, res;

    do{
        cout << "\nDigite o número da base: ";
        cin >> b;

        cout << "Digite o número do expoente: ";
        cin >> e;

        res = pow(b,e);

        cout << "O resultado da potência é:" << res << endl;

        cout << "\nDeseja fazer outra potênciação?\n Não= 0\n Sim = 1" << endl;
        cin >> op;

        

    }while(op == 1);
    

    return 0;
}
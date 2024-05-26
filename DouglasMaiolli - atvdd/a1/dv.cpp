#include <iostream>

using namespace std;
float func(float a){
    return a*a - 3*a +5;
}

int main(){
    int al;
    cout << "\nDigite um número: ";
    cin >> al;
    float resu = func(al);
    cout << "O valor de F(" << al << ") é: "<< resu << endl;

    return 0;
}
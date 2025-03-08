#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void duplicar_elementos(vector<int> &vec){
    for(int &valor:vec){
        valor*=2;
    }
}


int main(){
    vector<int> numeros = {1,2,3,4,5};
    cout << "valores originales: ";
    for(int valor:numeros){
        cout << valor << " ";
    }
    cout << endl;

    duplicar_elementos(numeros);

    cout << "valores despues de llamar a la funcion: ";
    for (int valor: numeros){
        cout << valor << " ";
    }
    cout << endl;
}
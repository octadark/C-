#include <iostream>
using namespace std;

int es_par(int a){
    if (a % 2 == 0){
        cout << "El numero: " << a << " es par" << endl;
        return true;
    }else{
        cout << "El numero: " << a << " es impar";
        return false;
    }

}


int main(){
    int numero;
    cout << "Ingresa un número" << endl;
    cin >> numero;
    es_par(numero);
}
#include <iostream>
using namespace std;


inline int sumar(int a, int b){
    return a + b;
}

int main(){
    int x = 5, y = 3;
    int resultado = sumar(x,y);
    cout << "El resultado de " << x << "Y" << y << "es: "<< resultado;
}
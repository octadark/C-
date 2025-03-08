#include <iostream>

using namespace std;

//Factorial utilizando B. FOR
/*
int factorial(int n){
    int resultado = 1;
    for(int i=1; i<= n; i++){
        resultado = resultado*i;
    }
    return resultado;
}
*/

// Funcion recursiva
int factorial(int n){
    if (n==0) {
        return 1; //caso base 
    }else{
        return n*factorial(n-1); //recursividad
    }
}

int main(){
    int numero;
    cout << "Ingrese un número: " << endl;
    cin >> numero;
    cout << factorial(numero);
}
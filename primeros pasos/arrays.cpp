#include <iostream>
using namespace std;

int main(){
    int matriz[3] = {1,2,3};

    //acceder a los elementos
    cout << "El primer elemento de la matriz: " << matriz[0] << endl;
    cout << "El segundo elemento de la matriz: " << matriz[1] << endl;
    cout << "El tercer elemento de la matriz: " << matriz[2] << endl;

    //cambiar el valor
    matriz[0] = 5;
    cout << "El primer elemento de la matriz: " << matriz[0] << endl;

    // Recorrer un array
    for (int i = 0; i < 3; i++){
        cout << "Elemento" << i << ":" << matriz[i] << endl;
    }
    //tamaño de un array
    

    return 0;
}
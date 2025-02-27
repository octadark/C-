#include <iostream>
using namespace std;

int main(){
    //como crear una matriz
    int mi_matriz[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9,
    };
    //cambiar el valor
    mi_matriz[2][0] = 125;
    cout << mi_matriz[2][0] << endl;

    //matriz 2

    int mi_matriz_2[3][3];
    //ingresar los valores a la matriz

    for (int fila = 0; fila < 3; fila++){
        for (int columna = 0; columna < 3; columna++){

            cin >> mi_matriz_2[fila][columna];
        }
    }
    //Mostrar los datos de la matriz

    for (int fila = 0; fila < 3; fila++){
        for (int columna = 0; columna < 3; columna++){

            cout << mi_matriz_2[fila][columna];
        }
        cout << endl;
    }

    return 0;
}
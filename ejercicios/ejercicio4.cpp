#include <iostream>
#include <vector>
using namespace std;

void ingresar_nombre(string matriz[][3], int filas, int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Ingrese el nombre de usuario en la fila: " << "[" << i << "]" << "En la columna: " << "[" << j << "]";
            cin >> matriz[i][j];
        }
        cout << endl;

    }
}

void mostrar_nombres(string matriz[][3], int filas, int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << matriz[i][j] << "\t";

        }
        cout << endl;
    }
}

int main(){
    const int filas = 2, columnas = 3;
    string nombres[filas][columnas];
    ingresar_nombre(nombres, filas, columnas);
    mostrar_nombres(nombres, filas, columnas);
    
}
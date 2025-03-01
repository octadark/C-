#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> calificaciones = {};
    int calificacion;
    int cant_calificacion;

    cout << "Cuantas calificaciones quieres ingresar?: " << endl;
    cin >> cant_calificacion;
    
    for(int i= 0; i < cant_calificacion; i++){
        cout << "Ingrese la calificacion: " << endl;
        cin >> calificacion;

        if (calificacion >= 1 && calificacion <= 10){
            cout << "calificacion ingresada" << endl;
            calificaciones.push_back(calificacion);

        }else{
            cout << "calificacion no ingresada, intente nuevamente" << endl;
            i--;
        }
    }

    cout << "Calificaciones: " << endl;
    for (int num : calificaciones){
        cout << num << " ";
    }

    cout << "Calificaciones reprobadas (<= 4): ";
    bool hay_reprobadas = false;
    for (int num : calificaciones) {
        if (num <= 4) {
            cout << num << " ";
            hay_reprobadas = true;
        }
    }

    if (!hay_reprobadas) {
        cout << "Ninguna.";
    }

    cout << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int opcion;

    cout << "Seleccione alguna opción" << endl;
    cout << "1-) ver saldo\n";
    cout << "2-) Depositar dinero\n";
    cout << "3-) Retirar dinero\n";
    cout << "4-) Salir\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Tu saldo es de $1000";
            break;
        case 2:
            cout << "Has depositado dinero";
            break;
        case 3:
            cout << "Has retirado dinero";
            break;
        case 4:
            cout << "Saliendo del programa";
            break;
        default:
            cout << "opcion no valida";
    }


    return 0;
}
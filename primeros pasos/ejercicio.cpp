#include <iostream>
using namespace std;

int main() {
    //declaración de variables
    double cantidad_bombones;
    double precio = 1000;
    double iva = 0.19;
    double descuento = 0.10;
    
    cout << "Ingrese la cantidad de bombones: " << endl;
    cin >> cantidad_bombones;

    double total = cantidad_bombones * precio;
    
    if (cantidad_bombones >= 100){
        double total_descuento = total - (total * descuento);
        double total_iva = total_descuento + (total_descuento * iva);
        cout << "El precio total con descuento e IVA:" << endl;
        cout << total_iva;

    }else{
        double total_iva_sin_descuento = total + (total * iva);
        cout << "El precio total sin descuento" << endl;
        cout << total_iva_sin_descuento;
    }

    
    return 0;
}
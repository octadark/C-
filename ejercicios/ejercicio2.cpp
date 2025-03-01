#include <iostream>
using namespace std;

int main(){
    int opcion;
    int contador_sandwich = 0;
    int cantidad_sandwich = 0;
    int total = 0;
    string clave_valida = "descuento123";
    string clave_descuento;
    double descuento = 0.1;


    cout << "Bienvenido a la Sandwicheria Octavio" << endl;
    cout << "Eliga su tipo de sandwich" << endl;

    cout << "Churrasco $1.500 [1]" << endl;
    cout << "Completo $1.000 [2]" << endl;
    cout << "Vegetariano $2.000 [3]" << endl;
    cout << "Barros luco $3.000 [4]" << endl;
    
    cout << "Cuantos sandwiches llevara?" << endl;
    cin >> cantidad_sandwich;

    while (contador_sandwich < cantidad_sandwich){
        cout << "Ingrese el tipo de sanwdwich" << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
            total += 1500;
            cout << "Elegiste sandwich churrasco $1.500" << endl;
            break;

            case 2:
            total += 1000;
            cout << "Elegiste sandwich completo $1.000" << endl;
            break;
            
            case 3:
            total += 2000;
            cout << "Elegiste sandwich vegetariano $2.000" << endl;
            break;

            case 4:
            total += 3000;
            cout << "Elegiste sandwich Barros luco $3.000" << endl;
            break;

            default:
            cout << "Valor ingresado invalido" << endl;
            continue;

            
        }
        contador_sandwich += 1;
        }
        cout << "Ingrese clave de descuento: (Si no tiene deje en blanco)" << endl;
        cin >> clave_descuento;

        if (clave_descuento == clave_valida) {
            double total_descuento = total -  (total * descuento);
            cout << "Descuento aplicado!" << endl;
            cout << "Precio total con descuento: " << total_descuento << endl;
        }else{
            cout << "Clave de descuento no valida. Precio total sin descuento: " << total << endl;
        }

        cout << "Precio original" << endl;
        cout << total << endl;
        cout << "Cantidad de sandwiches ingresados: " << endl;
        cout << cantidad_sandwich << endl;
        cout << "Gracias por su compra!!!" << endl;
    }






#include <iostream>

using namespace std;
/*
void mostrar_mensaje(string msg="bienvenidos", int veces=1){

    for (int i=0; i<veces; i++){
        cout << msg << endl;
    }
}
*/
void crear_ventana(int ancho=800, int alto=600, string titulo = "mi ventana", bool completa=false){
    cout << "Creando ventana: " << titulo << "\n"
        << "Ancho: " << ancho << "\n"
        << "Alto: " << alto << "\n"
        << "Pantalla Completa: " << (completa ? "Si" : "No") << "\n\n";
}


int main(){
    
    //mostrar_mensaje("Hasta luego", 5);
   //crear_ventana();
    //crear_ventana(900,700, "ventana de menu", true);
}
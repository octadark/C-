#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<string> nombres = {"octavio", "vicente", "Rodriguez", "Ramirez", "Alberto"};
    string persona_buscada = "octavio";

    for (int i=0; i < nombres.size(); i++){
        if(nombres[i] == persona_buscada){
            cout << "Persona encontrada. Nombre: " << persona_buscada << " encontrado en la posicion: " << i << endl;
            break;
        }
    }
    
    cout << "Hemos salido del bucle";
    

   vector<double> precios = {50,120,75,300,90,200};
   double descuento= 0.15;

   for (int i = 0; i<precios.size(); i++){

    if (precios[i] <= 100){

        continue;
    }
    precios[i] -= (precios[i]*descuento);
   }
   for (int i = 0; i<precios.size(); i++){
    cout << "precio final del producto: " << (i+1) << ": " << precios[i] << "$ " << endl;; 
   }

}
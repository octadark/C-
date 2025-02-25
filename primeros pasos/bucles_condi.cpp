#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
   if (edad >= 18) {
    cout << "Eres mayor de edad" << endl;
   } else if (edad >= 13){
    cout << "eres mayor de edad" << endl;

   }else{
    cout << "eres un niño" << endl;

   }
       return 0;
}
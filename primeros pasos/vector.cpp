#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> records = {25,45,60,35}; 

    vector <char> letras {'a','b','c','d'};

    vector <double> salario_base (350, 2125.50);
    
    //utilizando bucles for
    /*
    for (int i=0; i<350; i++){
        cout << salario_base[i] << endl;
    }
    
    int i = 0;

    //utlizando bucles while y la funcion size()
    
    int i = 0;
    while(i < salario_base.size()){
        cout << salario_base[i] << endl;

        i++;
    }
    
    //funcion push_back() y at()    
    records.push_back(105);
    cout << records.at(4);
    */


   records.push_back(105);
    for(int i = 0; i<records.size(); i++){
        cout << records.at(i) << endl;
    }


    return 0;
}
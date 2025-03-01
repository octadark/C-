#include <iostream>

using namespace std;

int main(){

    int pasoCoches[24][31][12]; //hora dia y mes

    //15 de mayo a las 2 de la madrugada
     for (int i=0; i<24; i++){
        for (int j=0; j<31;j++){
            for (int h=0; h<12; h++){
                
                pasoCoches[i][j][h] = rand() % 1000;
            }
        }
     }

     cout << "El numero de coches que pasaron el 7 de noviembre a las 19:00 fueron: " << pasoCoches[19][6][10];



    return 0;
}
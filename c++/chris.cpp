#include <iostream>

using namespace std;

int main() {
   /*deklarasi array yang bernama A bertipe interger elemen baris 3 & kolom 4*/ 
   int Z[3][4]={
        /*inisialisasi elemen pada matriks Z*/
    {3, 4, 8, 0}, 
    {3, 9, 2, 1}, 
    {6, 3, 0, 2}
   };
    
    /*perulangan for untuk menentukan indeks baris*/
    for (int b=0;b<3;b++){ 
        /*perulangan for untuk menentukan indeks kolom*/
        for (int k=0;k<4;k++){ 
            cout<< Z[b][k] <<" ";/* cetak matriks Z sesuai indeks */
        }
        cout << endl;
    }
return 0;
}

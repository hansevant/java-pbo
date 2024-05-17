#include <iostream>

using namespace std;

int main() {
   /*deklarasi array yang bernama A bertipe interger elemen baris 2 & kolom 3*/
    int A[2][3] = {
        {8, 4, 5},
        {3, 9, 1}
    };
        /*inisialisasi nilai pada matriks A*/
    
    for (int b=0;b<2;b++){
        for (int a=0;a<3;a++){ /*buat perulangan for untuk mencetak indeks kolom matriks */
            cout<<A[b][a]<<" "; /*cetak indeks baris dan kolom matriks*/
        }
        cout << endl;
    }
return 0;

}
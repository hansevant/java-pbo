#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream anggota;
anggota.open("list.txt");/*Deklarasi nama file list.txt*/

cout << "file berhasil dibuat\n";
// Write four names to the file.
anggota << "Melody"; /*tuliskan nama Melody*/
anggota<< "Melody";/*tuliskan nama Brad*/
anggota<< "Melody";/*tuliskan nama Joe Han*/
anggota<< "Melody"; /*tuliskan nama Travis Pastrana*/
anggota<< "Melody"; /*tuliskan nama Dida*/

 //Close the file
 anggota.close(); /*tutup file*/
return 0;
}

#include <iostream>

using namespace std;

/*prototype fungsi dengan tipe data integer dengan nama binarySearch*/

int binarySearch(const int [], int, int);

/*deklarasi konstanta bertipe integer dengan nama SIZE bernilai 20*/

const int SIZE = 20;

int main() {

int idNums[SIZE] = {101, 600, 142, 147, 199, 189, 207, 234, 222, 289, 296, 310, 319, 447 ,388, 394, 417, 429, 521, 536 };

int results;

int empID;

cout << "Masukkan ID karyawan yang ingin Anda cari : ";

/*Membaca masukan sebagai variabel empID*/

cin >> empID;

results = binarySearch(idNums, SIZE, empID);

/*Penyeleksian kondisi dengan kondisi jika results sama dengan -1*/

if (results == -1)
cout << "ID tersebut tidak ada dalam Array. \n";

else

{

cout << "ID tersebut ditemukan di elemen " << results;

cout << " dalam Array.\n";

}

return 0;

}

/*Membuat fungsi yang sesuai dengan prototype fungsi*/

int binarySearch(const int array[], int size, int value)
{

/*deklarasi variabel dalam 1 baris statement bertipe integer dengan ketentuan :

- nama variabel first bernilai 0

- nama variabel last bernilai size dikurang 1

- nama variabel middle

- nama variabel position bernilai -1*/

int first{0},last(SIZE-1),middle,position{-1};
bool found = false;

while (!found && first <= last)

{

middle = (first + last) / 2;

if (array[middle] == value)

{

found = true;

position = middle;

}

else if (array[middle] > value)

last = middle - 1;

else

first = middle + 1;

}

return position;

}
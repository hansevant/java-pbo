#include <iostream>
using namespace std;
int main()
{
const int bulan = 12;
int hari[bulan] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
for (int hitung = 0; hitung<bulan;hitung++)
{
cout << "Bulan " << ( hitung + 1) << " mempunyai jumlah " ;
cout << hari[hitung] << " hari.\n";
}
return 0;
}
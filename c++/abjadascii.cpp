#include <iostream>
using namespace std;
int main()
{
const int jml_huruf = 10; // jumlah penginputan
char abjad[jml_huruf] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
cout << "Karakter" << "-" << "ASCII Code\n";
for (int hitung = 0; hitung<jml_huruf; hitung++)
{
cout << abjad[hitung] << "----------------";
cout << static_cast<int>(abjad[hitung]) << endl;
}
return 0;
}

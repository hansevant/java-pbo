#include <iostream>
#include <vector>
using namespace std;

int main()
{
      vector<int> vec;
      vector<int>::iterator it;
      int count;

      //Menambahkan elemen ke dalam vector dengan push back
      cout<<"Elemen dalam vector : 1,2,3,4,5"<<endl;
        for (count = 1; count < 6; count++)
            vec.push_back(count);
      //Menampilkan seluruh isi vector 
      cout<<"Menampilkan seluruh isi vector  "<<endl;
        for (count = 0; count < vec.size(); count++)
            cout << vec[count] << " ";
      cout<<endl;
      //Menampilkan seluruh isi vector menggunakan iterator
      cout<<"Menampilkan seluruh isi vector menggunakan iterator: "<<endl;
      for(it = vec.begin(); it<vec.end(); it++)
      {
        cout<<*it<<" ";
      }
      cout<<endl;
      cout<<endl;
      //Mengambil/menghapus elemen vector 4 dan 5
      cout<<"POP BACK : 4,5"<<endl;
      vec.pop_back();
      vec.pop_back();

      cout<<"Isi vector saat ini: "<<endl;
      for(int i = 0; i < vec.size(); i++)
      {
            cout<<vec[i]<<"  ";
      }
      cout<<endl;


      return 0;
}
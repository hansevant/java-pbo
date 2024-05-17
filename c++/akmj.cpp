#include <iostream>
using namespace std;

struct rifle{
    string name;
    int mag,harga;
    string bullet;
};

struct pistol{
  string name,bullet;
  int mag,harga;
};

struct data{
    string nama;
    int nik;
};

int main(){
    
    int cases;
    char yn;
    
    rifle ak47;
    rifle aug;
    pistol revolver;
    data pemilik;
    
    ak47.name="Avtomat Kalashnikova 1947 AKA AK47";
    ak47.mag=30;
    ak47.bullet="kaliber 7,62 x 39 mm";
    ak47.harga = 799000;
    
    aug.name="Armee-Universal-Gewehr AKA AUG";
    aug.mag=30;
    aug.bullet="kaliber 5,56 x 45 mm";
    aug.harga= 999000;
    
    revolver.name="Revolver";
    revolver.mag=6;
    revolver.bullet="44 Magnum";
    revolver.harga= 399000;
    
    cout<<"Selamat Datang Di Toko Senjata!\n";
    
    cout<<"Masukkan Nama Anda : ";cin>>pemilik.nama;
    cout<<"Masukkan Nomor KTP Anda : ";cin>>pemilik.nik;
    
    cout<<endl;
    
    cout<<"Daftar Senjata yang ready"<<endl;
    cout<<"1. AK47"<<endl;
    cout<<"2. AUG"<<endl;
    cout<<"3. Revolver"<<endl;
    
    cout<<"Pilih Senjata yang tersedia : ";cin>>cases;
    cout<<endl;
    switch (cases){
        
    case 1:
    cout<<"---Rifle---"<<endl;
    cout<<"Nama Senjata: "<<ak47.name<<endl;
    cout<<"Harga : "<<ak47.harga<<" Rupiah"<<endl;
    cout<<"Jumlah Amunisi: "<<ak47.mag<<endl;
    cout<<"Jenis Peluru: "<<ak47.bullet<<"\n"<<endl;
    break;
    case 2:
    cout<<"---Rifle---"<<endl;
    cout<<"Nama Senjata: "<<aug.name<<endl;
    cout<<"Harga : "<<aug.harga<<" Rupiah"<<endl;
    cout<<"Jumlah Amunisi: "<<aug.mag<<endl;
    cout<<"Jenis Peluru: "<<aug.bullet<<"\n"<<endl;
    break;
    case 3:
    cout<<"---Pistol---"<<endl;
    cout<<"Nama Senjata: "<<revolver.name<<endl;
    cout<<"Harga : "<<revolver.harga<<" Rupiah"<<endl;
    cout<<"Jumlah Amunisi: "<<revolver.mag<<endl;
    cout<<"Jenis Peluru: "<<revolver.bullet<<endl;
    break;
    }    
    
    cout<<"Beli senjata ini (Y/N) ? ";cin>>yn;
    cout<<endl;
    switch(yn){
        case 'y':
        cout<<"Nama : "<<pemilik.nama<<endl;
        cout<<"Nomor Identitas : "<<pemilik.nik<<endl;
        cout<<"Masa aktif surat : 2 Tahun"<<endl;
        cout<<"Dengan ini saya bersumpah bahwa identitas diatas adalah benar dan saya akan menggunakan senjata yang telah saya beli dengan bijak";
        break;
        case 'n':
        cout<<"silahkan antri lagi";
        break;
        default:
        cout<<"pilihan anda salah";
    }
return 0;
}
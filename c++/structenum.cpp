#include <iostream>
#include <string.h>
enum JENIS_KELAMIN{Pria, Wanita};
int main()
{
	struct MAHASISWA
	{
	  char NIM[15];
	  char Nama[20];
	  char Alamat[30];
	  char Kota[15];
	  JENIS_KELAMIN gender;
	}A;
	strcpy(A.NIM,"01500024");
	strcpy(A.Nama,"Dewi Sartika");
	strcpy(A.Alamat,"Jl.Raya Telaga Warna");
	strcpy(A.Kota,"Jakarta");
	A.gender=Wanita;
	 
	 cout<<"NIM	    : "<<A.NIM<<endl;
	 cout<<"Nama  	: "<<A.Nama<<endl;
	 cout<<"Alamat	: "<<A.Alamat<<endl;
	 cout<<"Kota  	: "<<A.Kota<<endl;
	 cout<<"Jenis Kelamin	: "<<A.gender<<endl;
	 return 0;
}

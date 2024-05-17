#include <stdio.h>

int main()
{
    int makanan,byr,h1,h2,h3,h4,h5,total_mak,minuman,total_min,h6,h7,h8,h9,h10;
    float total_byr,total_byr2,uangtunai,kembalian;

    printf("                           **** DAFTAR MENU ****\n\n");
    printf("                               ^^^^-----^^^^\n\n");
    printf("                           **** CAFEIN AJAH ****\n");
    printf("======================================================================================\n");
    printf("|  kode |          Makanan         |   Harga  |    kode  |    Minuman      |  Harga  |\n");
    printf("|=======|==========================|==========|==========|=================|=========|\n");
    printf("|  001  |  Nasi Goreng Janda       | Rp17.000 |    006   | Es Milo\t   | Rp6.000 |\n");
    printf("|  002  |  Pecel Ayam Betina       | Rp20.000 |    007   | Es Teh\t   | Rp4.000 |\n");
    printf("|  003  |  Pecel Lele Duda         | Rp18.000 |    008   | Es Jeruk\t   | Rp5.000 |\n");
    printf("|  004  |  Mie Tektek Perawan      | Rp15.000 |    009   | Es Hilo\t   | Rp6.000 |\n");
    printf("|  005  |  Sate Jackichan          | Rp30.000 |    010   | Es Kelapa Muda  | Rp7.000 |\n");
    printf("======================================================================================\n");
    start1:
    printf("\n pesan makanan (1-5)\t:");
    scanf("%d",&makanan);

    //menyimpan input data variabel makanan dan minuman

    switch(makanan)

    /*percabangan kode program dimana kita membandingkan isi sebuah variabel dengan beberapa nilai...
    jika isi dari variabel ini sama dengan salah satu nilai kode ini sama maka kode blok ini akan dijalankan*/
{
    case 1:
        h1=17000;
        printf(" >nasi goreng janda\t:Rp.%d\n",h1);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_mak=byr*h1;
        break;
    case 2:
        h2=20000;
        printf(" > pecel ayam betina\t:Rp.%d\n",h2);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_mak=byr*h2;
        break;
    case 3:
        h3=18000;
        printf(" > pecel lele duda\t:Rp.%d\n",h3);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_mak=byr*h3;
        break;
    case 4:
        h4=15000;
        printf(" > mie tektek perawan\t:Rp.%d\n",h4);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_mak=byr*h4;
        break;
    case 5:
        h5=30000;
        printf(" > sate jackichan\t:Rp.%d\n",h5);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_mak=byr*h5;
        break;
}
    start2:
    printf("\n pesan minuman (6-10)\t:");
    scanf("%d",&minuman);

    switch (minuman)
{
    case 6:
        h6=6000;
        printf(" > es milo\t:Rp.%d\n",h6);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_min=byr*h6;
        break;
    case 7:
        h7=4000;
        printf(" > es teh\t:Rp.%d\n",h7);
        printf("jumlah pesanan\t:"); scanf("%d",&byr);
        total_min=byr*h7;
        break;
    case 8:
        h8=5000;
        printf(" > es jeruk\t:Rp.%d\n",h8);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_min=byr*h8;
        break;
    case 9:
        h9=6000;
        printf(" > es hilo\t:Rp.%d\n",h9);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_min=byr*h9;
        break;
    case 10:
        h10=7000;
        printf(" > kelapa muda\t:Rp.%d\n",h10);
        printf(" jumlah pesanan\t:"); scanf("%d",&byr);
        total_min=byr*h10;
        break;
}
    printf("\t-----Struk-----\n");
    total_byr= total_mak + total_min;
    printf(" Total\t\t=Rp.%.f\n",total_byr);
    total_byr2=total_mak+total_min;
    printf(" Total Belanja\t=Rp.%.f\n",total_byr2);
    printf(" Uang Tunai\t= Rp.");
    scanf("%f",&uangtunai);
    kembalian=uangtunai-total_byr2;
    printf(" Kembalian\t=Rp.%.f\n",kembalian);
    printf("\n    TERIMA KASIH DAN \n");
    printf("\n SELAMAT DATANG KEMBALI \n");
    /*difungsi ini ada beberapa fungsi yaitu mencetak total bayar, mencetak hasil total belanja keseluruhan, menyimpan data variabel uang tunai,
    dan menampilkan hasil uang kembalian*/


return 0;
//berfungsi mengembalikan nilai 0
}
//berfungsi mengakhiri program

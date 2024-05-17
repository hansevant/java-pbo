#include <stdio.h>

void main(){

    int kelas;
    char nama[20];

    printf("Hello World");

    printf("Masukkan Nama anda:");
    scanf("%s",nama);
    printf("Masukkan kelas anda :");
    scanf("%i",kelas);

    printf("nama anda adalah %s dari kelas %i",nama,kelas);

    return 0;
}

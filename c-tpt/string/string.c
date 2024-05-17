#include<stdio.h>
#include<stdlib.h>
int main()
{
 char name[6] = {'J','o','n','n','y','\0'};
 char lastname[] = "Fira";
 char strFullname[13];
 //menampilkan nilai string
 printf("Name %s \n",name);
 printf("Nama Belakang %s \n",lastname);
 //menggunakan fungsi pada string
 strcpy(strFullname,lastname);
  printf("Nama Lengkap %s \n", strFullname);
 strcat(name,strFullname);
 printf("Name = %s \n",name);
 return 0;
}

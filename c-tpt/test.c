#include <stdio.h>

int main()
{
    int bil = 0;
    float hasil;
    int a;
    for (int i=0; i<10 ; i++ ){
        printf("Masukkan Bilangan : ");
        scanf("%d",&a);
        bil= bil + a;
        printf ("bil skrg %d\n",bil);
    }
    
    printf ("%d\n",bil);
   hasil = bil/10;
   printf("rataratanya %.2f",hasil);
    return 0;
}

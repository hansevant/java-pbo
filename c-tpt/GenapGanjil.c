#include <stdio.h>

int main()
{

int i;
int total;

 for (i = 1; i <= 20; i++) {
     if (i % 2 == 1){
        total += 1;
    }
 }

printf("bilangan genap ada %d buah",total);
    return 0;
}

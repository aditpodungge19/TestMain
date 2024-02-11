#include <stdio.h>

void main(){
    char ulangi = 'y';
    int counter = 0;

   do{
        printf("Apakah kamu may mengulangi> \n");
        printf("Jawab (y/t) :");
        scanf(" %c", &ulangi);

        //incriment counter
        counter++;
    }  while(ulangi == 'y');
    printf("\n\n-----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %d kali. \n", counter);    
}
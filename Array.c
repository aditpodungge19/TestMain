#include <stdio.h>

int main() {
    //Mendefinisikan array dengan 5 elemen bertipe integer
    int angka[6] = {2,4,8,12,16,18};

    //Menampilkan isi array index ke - 3
    printf(" Isi array index ke ke 3 = %d\n", angka[3]);

    //Menampilkan isi array
    printf("Isi array semuanya: \n");
    for(int i = 0; i < 6; i++){
        printf("%d\n", angka[i]);
    }

    return 0;
}
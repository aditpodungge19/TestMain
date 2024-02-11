#include <stdio.h>

int main() {
    int angka = 3;

    switch(angka) {
        case 1:
            printf("Angka adalah 1 \n");
        break;
        case 2:
            printf("Angka adalah 2 \n");
        break;
        case 3:
            printf("Angka adalah 3 \n");
        break;
        default:
            printf("Angka bukan 1, 2, atau 3 \n");
        
    }

    return 0;
}
#include <stdio.h>

void main() {
    int i;
    int j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Perulangan ke (%d, %d)\n", i, j);
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Ukuran maksimum stack

// Struktur untuk stack
struct Stack {
    int data[MAX_SIZE];
    int top;
};

// Fungsi untuk membuat stack baru
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1; // Inisialisasi stack kosong
    return stack;
}

// Fungsi untuk mengecek apakah stack penuh
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Fungsi untuk mengecek apakah stack kosong
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Fungsi untuk menambahkan elemen ke dalam stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack penuh, tidak bisa menambahkan elemen.\n");
        return;
    }
    stack->data[++stack->top] = item;
    printf("%d ditambahkan ke dalam stack.\n", item);
}

// Fungsi untuk menghapus elemen dari stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong, tidak ada elemen yang bisa dihapus.\n");
        return -1;
    }
    return stack->data[stack->top--];
}

// Fungsi untuk mendapatkan elemen teratas dari stack tanpa menghapusnya
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong, tidak ada elemen yang bisa dilihat.\n");
        return -1;
    }
    return stack->data[stack->top];
}

int main() {
    // Membuat stack baru
    struct Stack* stack = createStack();

    // Menambahkan beberapa elemen ke dalam stack
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    // Menampilkan elemen teratas dari stack
    printf("Elemen teratas dari stack: %d\n", peek(stack));

    // Menghapus elemen dari stack
    printf("%d dihapus dari stack.\n", pop(stack));
    printf("%d dihapus dari stack.\n", pop(stack));

    // Menampilkan elemen teratas dari stack setelah penghapusan
    printf("Elemen teratas dari stack: %d\n", peek(stack));

    return 0;
}

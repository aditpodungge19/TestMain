#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 // Ukuran maksimum queue

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

// Fungsi untuk membuat queue baru
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1; // Mengatur pointer front ke -1 menandakan queue kosong
    queue->rear = -1; // Mengatur pointer rear ke -1 menandakan queue kosong
    return queue;
}

// Fungsi untuk menambahkan elemen ke dalam queue (enqueue)
void enqueue(struct Queue* queue, int value) {
    if (queue->rear == MAX_SIZE - 1) { // Memeriksa apakah queue penuh
        printf("Queue penuh, tidak dapat menambahkan elemen baru.\n");
    } else {
        if (queue->front == -1) // Jika queue kosong, mengatur front ke 0
            queue->front = 0;
        queue->rear++; // Menambahkan rear
        queue->items[queue->rear] = value; // Menambahkan elemen baru pada posisi rear
        printf("%d ditambahkan ke dalam queue.\n", value);
    }
}

// Fungsi untuk menghapus elemen dari queue (dequeue)
int dequeue(struct Queue* queue) {
    if (queue->front == -1) { // Memeriksa apakah queue kosong
        printf("Queue kosong, tidak dapat menghapus elemen.\n");
        return -1;
    } else {
        int removedItem = queue->items[queue->front]; // Menyimpan elemen yang akan dihapus
        queue->front++; // Menggeser pointer front
        if (queue->front > queue->rear) { // Jika front melewati rear, mengatur queue kosong
            queue->front = -1;
            queue->rear = -1;
        }
        return removedItem;
    }
}

int main() {
    struct Queue* queue = createQueue(); // Membuat queue baru

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50); // Queue sekarang sudah penuh, queue tidak dapat menambahkan elemen baru

    printf("Elemen yang dihapus: %d\n", dequeue(queue));
    printf("Elemen yang dihapus: %d\n", dequeue(queue));
    printf("Elemen yang dihapus: %d\n", dequeue(queue));
    printf("Elemen yang dihapus: %d\n", dequeue(queue));
    printf("Elemen yang dihapus: %d\n", dequeue(queue)); // Setelah semua elemen dihapus, queue menjadi kosong

    return 0;
}

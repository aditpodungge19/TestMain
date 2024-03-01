#include <stdio.h>
#include <stdlib.h>

// Struktur untuk node dalam linked list
struct Node {
    int data;
    struct Node* next;
};

// Fungsi untuk menambahkan node baru di awal linked list
void tambahDepan(struct Node** head_ref, int new_data) {
    // Mengalokasikan memory untuk node baru
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Mengisi data dan mengatur pointer next
    new_node->data = new_data;
    new_node->next = (*head_ref);

    // Mengatur head untuk menunjuk ke node baru
    (*head_ref) = new_node;
}

// Fungsi untuk mencetak isi linked list
void cetakLinkedList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    // Inisialisasi linked list kosong
    struct Node* head = NULL;

    // Menambahkan beberapa node di depan linked list
    tambahDepan(&head, 5);
    tambahDepan(&head, 4);
    tambahDepan(&head, 3);
    tambahDepan(&head, 2);
    tambahDepan(&head, 1);

    // Mencetak isi linked list
    printf("Linked List: ");
    cetakLinkedList(head);

    return 0;
}

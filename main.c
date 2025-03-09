#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ANSI Escape kode untuk warna teks
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define CYAN    "\033[1;36m"
#define RED     "\033[1;31m"

// Struktur Node untuk Queue (Antrean)
typedef struct Node {
    char nama[50];
    char layanan[50];
    struct Node* next;
} Node;

// Struktur Queue
typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Struktur Stack untuk Riwayat
typedef struct {
    Node* top;
} Stack;

// Inisialisasi Queue
void initQueue(Queue* q) {
    q->front = q->rear = NULL;
}

// Inisialisasi Stack
void initStack(Stack* s) {
    s->top = NULL;
}

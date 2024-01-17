#include <stdio.h>

// Fungsi untuk melakukan pencarian linear pada array
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Mengembalikan indeks jika elemen ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 11;

    // Tampilkan array
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Lakukan pencarian linear
    int result = linearSearch(arr, n, key);

    // Tampilkan hasil pencarian
    if (result != -1) {
        printf("\n%d ditemukan pada indeks %d.\n", key, result);
    } else {
        printf("\n%d tidak ditemukan dalam array.\n", key);
    }

    return 0;
}

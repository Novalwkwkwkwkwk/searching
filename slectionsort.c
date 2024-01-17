#include <stdio.h>

// Fungsi untuk melakukan Selection Sort pada array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Temukan indeks elemen terkecil di sisa array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Tukar elemen terkecil dengan elemen pertama di sisa array
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Tampilkan array sebelum diurutkan
    printf("Array sebelum diurutkan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Panggil fungsi selectionSort untuk mengurutkan array
    selectionSort(arr, n);

    // Tampilkan array setelah diurutkan
    printf("\nArray setelah diurutkan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
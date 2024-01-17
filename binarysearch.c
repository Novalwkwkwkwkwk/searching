#include <stdio.h>
#include <math.h>

// Fungsi untuk mencari nilai minimum antara dua bilangan
int min(int a, int b) {
    if (b > a)
        return a;
    else
        return b;
}

// Fungsi untuk melakukan Jump Search
int jumpsearch(int arr[], int x, int n) {
    // Menentukan ukuran blok yang akan di-skip
    int step = sqrt(n);

    // Mencari blok di mana elemen x berada (jika ada)
    int prev = 0;
    while (arr[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1; // Elemen tidak ditemukan jika melebihi ukuran array
    }

    // Melakukan pencarian linear untuk x di blok yang dimulai dari prev
    while (arr[prev] < x) {
        prev++;

        // Jika mencapai blok berikutnya atau akhir array, elemen tidak ditemukan
        if (prev == min(step, n))
            return -1;
    }

    // Jika elemen ditemukan
    if (arr[prev] == x)
        return prev;

    return -1; // Elemen tidak ditemukan
}

int main() {
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
    int x = 55;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = jumpsearch(arr, x, n);

    if (index >= 0)
        printf("Angka ditemukan pada indeks %d", index);
    else
        printf("Angka tidak ditemukan dalam array");

    return 0;
}

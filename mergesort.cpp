#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menggabungkan dua sub-array yang sudah terurut
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Membuat array sementara untuk menampung data
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Menggabungkan kembali array sementara ke array asli
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin sisa elemen (jika ada)
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi utama Merge Sort secara rekursif
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Mencari titik tengah (Base Case: jika elemen <= 1, tidak masuk ke sini)
        int mid = left + (right - left) / 2;

        // Urutkan setengah bagian kiri
        mergeSort(arr, left, mid);

        // Urutkan setengah bagian kanan
        mergeSort(arr, mid + 1, right);

        // Gabungkan kedua bagian yang sudah terurut
        merge(arr, left, mid, right);
    }
}

int main() {
    int data[] = {6, 3, 4, 1, 5, 2, 7, 0};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < size; i++) cout << data[i] << " ";
    cout << endl;

    mergeSort(data, 0, size - 1);

    cout << "Data setelah Merge Sort: ";
    for (int i = 0; i < size; i++) cout << data[i] << " ";
    cout << endl;

    return 0;
}
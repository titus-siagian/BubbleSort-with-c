#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen jika elemen j lebih besar dari elemen j+1
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input jumlah elemen
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    int arr[n];

    // Input elemen-elemen array
    printf("Masukkan %d angka:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting
    bubbleSort(arr, n);

    // Menampilkan hasil setelah sorting
    printf("Angka setelah disortir:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

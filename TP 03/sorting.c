#include "sorting.h"
// Bubblesort
void bubbleSort(int array[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Quicksort
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int vector[], int low, int high) {
    int pivot = vector[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (vector[j] < pivot) {
            i++;
            swap(&vector[i], &vector[j]);
        }
    }
    swap(&vector[i + 1], &vector[high]);
    return (i + 1);
}

void quickSort(int vector[], int low, int high) {
    if (low < high) {
        int pi = partition(vector, low, high);

        quickSort(vector, low, pi - 1);
        quickSort(vector, pi + 1, high);
    }
}
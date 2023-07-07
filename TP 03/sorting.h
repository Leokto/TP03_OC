#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Bubblesort 
void bubbleSort(int array[], int size);

// Quicksort
void swap(int* a, int* b);
int partition(int vector[], int low, int high);
void quickSort(int vector[], int low, int high);
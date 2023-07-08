#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bubblesort 
void bubbleSort(int array[], int size);

// Quicksort
void swap(int* a, int* b);
int partition(int vector[], int low, int high);
void quickSort(int vector[], int low, int high);

// Radixsort
void radixSort(int arr[], int n);
void countingSort(int arr[], int n, int exp);

// Binary Tree Sort
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};
void inOrder(struct Node* root, int* arr, int* index);
void binaryTreeSort(int arr[], int n);
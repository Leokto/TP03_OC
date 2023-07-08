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
int getMax(int array[], int size);

//Binary Tree structure
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value);
struct TreeNode* insertNode(struct TreeNode* root, int value);
void inorderTraversal(struct TreeNode* root, int *ptr);

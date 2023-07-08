#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Binary Tree structure
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value);
struct TreeNode* insertNode(struct TreeNode* root, int value);
void inorderTraversal(struct TreeNode* root, int *ptr);

// Bubblesort 
void bubbleSort(int array[], int size);

// Quicksort
void swap(int* a, int* b);
int partition(int vector[], int low, int high);
void quickSort(int vector[], int low, int high);
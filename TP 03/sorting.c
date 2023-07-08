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

// Binary Tree Sort
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void inorderTraversal(struct TreeNode* root, int *ptr) {
    if (root != NULL) {
        inorderTraversal(root->left, ptr);
        printf("%d ", root->data);
        *ptr += 1;
        if(*ptr % 9 == 0){
            printf("\n");
        }
        inorderTraversal(root->right, ptr);
    }
}
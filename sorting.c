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

// Radixsort
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int getMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
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

    struct TreeNode* current = root;
    struct TreeNode* parent = NULL;

    while (current != NULL) {
        parent = current;
        
        if (value < current->data) {
            current = current->left;
        } else if (value > current->data) {
            current = current->right;
        } else {
            // Handle duplicate values (if needed)
            return root;
        }
    }

    if (value < parent->data) {
        parent->left = createNode(value);
    } else {
        parent->right = createNode(value);
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

void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}   
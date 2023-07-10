#include "sorting.h"

int main(){
    int N = 10000, vector[N], counter = 0, option;
    struct TreeNode* root = NULL;
    root = insertNode(root, rand());
    srand(time(0));
    for(int i = 0; i < N; i++){
        vector[i] = rand();
    }
    printf("Qual ordenação deseja usar:\nBubblesort - 0\nRadixsort - 1\nQuicksort - 2\nÁrvore BST - 3\n");
    scanf("%d", &option);
    switch (option){
    case 0:
        bubbleSort(vector, N);
        break;
    case 1:
        radixSort(vector, N);
        break;
    case 2:
        quickSort(vector, 0, N - 1);
        break;
    case 3:
        for(int i = 0; i < N; i++){
            insertNode(root, rand());
        }
        break;
    default:
        break;
    }
    printf("Sorted array: \n");
    if(option >= 0 && option < 3){
        for (int i = 0; i < N; i++) {
            printf("%d ", vector[i]);
            if( i % 9 == 0){
                printf("\n");
            }
        }
    }
    if(option == 3){
    inorderTraversal(root, &counter);
    }

    freeTree(root);
    return 0;
}
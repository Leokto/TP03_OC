#include "sorting.h"

int main(){
    int N = 10000, vector[N], counter = 0;
    struct TreeNode* root = NULL;
    root = insertNode(root, rand());
    srand(time(0));
    for(int i = 0; i < 10000 - 1; i++){
        insertNode(root, rand());
    }
    ///bubbleSort(vector, N);
    ///radixSort(vector, N);
    //quickSort(vector, 0, N - 1);
    printf("Sorted array: \n");
    inorderTraversal(root, &counter);
    return 0;
}



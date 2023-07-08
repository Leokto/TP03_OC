#include "sorting.h"

int main(){
    int N = 10000, vector[N];
    srand(time(0));
    for(int i = 0; i < 10000; i++){
        vector[i] = rand();
    }
    ///bubbleSort(vector, N);
    ///radixSort(vector, N);
    quickSort(vector, 0, N - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vector[i]);
        if( i % 9 == 0){
            printf("\n");
        }
    }
    return 0;
}
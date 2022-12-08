#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 4, 6, 8, 9};
    int arr2[] = {2, 3, 5, 7, 10};
    int size = sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size];
    for(int i=0, j=0, k=0; k<size; ){
        if(arr1[i]< arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    printf("Array : ");
    for(int k=0; k<size; k++){
        printf("%d ", arr3[k]);
    }
    
    return 0;
}
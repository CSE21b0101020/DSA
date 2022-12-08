#include <stdio.h>
 int getMissingNumber(int *array, int size) {
    int i, sum = 0, n = size + 1; 
    for(i = 0; i < size; i++){
        sum = sum + array[i];
    }
   
    return (n*(n+1))/2 - sum;
}
 int main(){
    int array[8] = {1, 4, 6, 2, 5, 8, 7, 9};
  
    printf("Missing Number : %d \n", getMissingNumber(array, 8));
 
    return 0;
}
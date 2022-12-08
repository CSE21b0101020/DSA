#include <stdio.h>    
int main()    
{    
       
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};       
    int length = sizeof(arr)/sizeof(arr[0]);    
    printf("Duplicate elements in given array: \n");      
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  
#include <stdio.h>

int ternarySearch(int l, int array_size, int key, int array_nums[])

{
	while (array_size >= l) {
		int mid1 = l + (array_size - l) / 3;
		int mid2 = array_size - (array_size - l) / 3;
		if (array_nums[mid1] == key) {
			return mid1;
		}
		if (array_nums[mid2] == key) {
			return mid2;
		}
		if (key < array_nums[mid1]) {
			array_size = mid1 - 1;
		}
		else if (key > array_nums[mid2]) {
			l = mid2 + 1;
		}
		else {
			l = mid1 + 1;
			array_size = mid2 - 1;
		}
	}
	return -1;
}
int main()
{
    int n;
    int l = 0;
	int array_nums[] = {1,2,3,4,5,6,7,8,9,10};
	size_t array_size = sizeof(array_nums) / sizeof(int);
    printf("Original Array %d: ",array_size);
    for (int i = 0; i < array_size; i++) printf("%d ", array_nums[i]);   
    printf("\nInput a number to search: ");
    scanf("%d", &n);      
    int result_position = ternarySearch(l, array_size, n, array_nums);
    printf("\nElement found at position: %d", result_position);   
    return 0;
}

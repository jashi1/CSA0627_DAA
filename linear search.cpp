#include <stdio.h>
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == key) 
		{
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[] = {56,89,7,13,75,23,8,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    index = linearSearch(arr, size, key);

    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

#include <stdio.h>

// Function to find the maximum and minimum values in an array
void findMaxMin(int arr[], int low, int high, int *max, int *min) {
    if (low == high) {
        // Base case: Only one element in the array
        *max = *min = arr[low];
        return;
    }

    int mid = (low + high) / 2;
    int leftMax, leftMin, rightMax, rightMin;

    // Recursively find max and min in the left half
    findMaxMin(arr, low, mid, &leftMax, &leftMin);
    // Recursively find max and min in the right half
    findMaxMin(arr, mid + 1, high, &rightMax, &rightMin);

    // Combine results
    *max = (leftMax > rightMax) ? leftMax : rightMax;
    *min = (leftMin < rightMin) ? leftMin : rightMin;
}

int main() {
    int n;
    printf("Enter the total number of numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    findMaxMin(arr, 0, n - 1, &max, &min);

    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);

    return 0;
}


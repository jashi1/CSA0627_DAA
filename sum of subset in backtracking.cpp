#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool solution[MAX_SIZE];
int weights[MAX_SIZE];
int n;
int targetSum;

void displaySubset() {
    printf("\nSubset with the given sum is: ");
    for (int i = 0; i < n; i++) {
        if (solution[i]) {
            printf("%d ", weights[i]);
        }
    }
    printf("\n");
}

void subsetSum(int s, int k, int r) {
    solution[k] = true;
    if (s + weights[k] == targetSum) {
        displaySubset();
    } else if (s + weights[k] + weights[k+1] <= targetSum) {
        subsetSum(s + weights[k], k + 1, r - weights[k]);
    }
    if ((s + r - weights[k] >= targetSum) && (s + weights[k+1] <= targetSum)) {
        solution[k] = false;
        subsetSum(s, k + 1, r - weights[k]);
    }
}

void findSubsets(int weights[], int n, int targetSum) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += weights[i];
    }

    if (weights[0] <= targetSum && sum >= targetSum) {
        subsetSum(0, 0, sum);
    } else {
        printf("No solution is possible\n");
    }
}

int main() {
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    findSubsets(weights, n, targetSum);

    return 0;
}

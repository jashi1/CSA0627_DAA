#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the 0/1 Knapsack Problem
int knapSack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;

    // If the weight of the nth item exceeds the knapsack capacity, exclude it
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        // Choose the maximum value between including or excluding the nth item
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
                   knapSack(W, wt, val, n - 1));
}

int main() {
    int profit[] = {60, 100, 120}; // Values of items
    int weight[] = {10, 20, 30};  // Weights of items
    int W = 50;                   // Knapsack capacity
    int n = sizeof(profit) / sizeof(profit[0]);

    printf("Maximum value achievable: %d\n", knapSack(W, weight, profit, n));
    return 0;
}


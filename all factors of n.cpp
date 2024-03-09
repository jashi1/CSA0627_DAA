#include <stdio.h>

// Function to find the factorial of a non-negative integer using recursion
long int multiplyNumbers(int n) {
    if (n >= 1)
        return n * multiplyNumbers(n - 1);
    else
        return 1;
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    printf("Factorial of %d = %ld\n", N, multiplyNumbers(N));
    return 0;
}


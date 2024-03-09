#include <stdio.h>
#include <math.h>

/* Function declaration */
int reverse(int num);

int main() {
    int num, rev;

    /* Input number from the user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Call the function to reverse the number */
    rev = reverse(num);

    printf("Reverse of %d = %d", num, rev);
    return 0;
}

/* Recursive function to find the reverse of any number */
int reverse(int num) {
    // Find the total digits in 'num'
    int digit = (int)log10(num);

    // Base condition: If the number is 0, return 0
    if (num == 0)
        return 0;

    // Compute the reverse using the recursive approach
    return ((num % 10) * pow(10, digit)) + reverse(num / 10);
}


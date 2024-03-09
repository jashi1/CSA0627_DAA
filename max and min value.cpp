#include <stdio.h>

int main() {
    int n = 10; 
    int max, min, value;

    printf("Enter 10 numbers:\n");
    scanf("%d", &value);
    max = min = value;
    for (int c = 1; c < n; c++) {
        scanf("%d", &value);

        if (value > max) {
            max = value;
        }

        if (value < min) {
            min = value;
        }
    }

    printf("Biggest number is: %d\n", max);
    printf("Smallest number is: %d\n", min);

    return 0;
}


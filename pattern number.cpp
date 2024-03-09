#include <stdio.h>
void printRightHalfPyramid(int rows) {
    if (rows <= 0)
        return; 
    for (int j = 0; j < rows; j++) {
        printf("%d ", j+1);
    }
    printf("\n");
    printRightHalfPyramid(rows-1);
}

int main() {
    int rows=5; 
    printRightHalfPyramid(rows);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *A;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Allocate array dynamically
    A = (int *)malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill array
    for (i = 0; i < n; i++) {
        A[i] = i * 10;
    }

    // Print array
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Free memory
    free(A);

    return 0;
}

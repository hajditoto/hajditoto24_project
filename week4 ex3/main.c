#include <stdio.h>

// Function to read the array from input
void readArray(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to subtract the minimum element from each row
void subtractMin(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        int minVal = arr[i][0]; // Assume first element is the min

        // Find the minimum value in the row
        for (int j = 1; j < m; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
        }

        // Subtract minVal from each element in the row
        for (int j = 0; j < m; j++) {
            arr[i][j] -= minVal;
        }
    }
}

// Function to print the modified array
void printArray(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];  // Declare the array dynamically based on user input

    readArray(n, m, arr);   // Read input matrix
    subtractMin(n, m, arr); // Process the matrix
    printArray(n, m, arr);  // Output the result

    return 0;
}

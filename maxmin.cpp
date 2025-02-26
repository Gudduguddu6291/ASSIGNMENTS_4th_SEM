#include <stdio.h>

// Global array
int arr[5] = {1,0,3,5,-1};
int count =0;
// Function to find max and min using recursive approach
void findMaxMin(int arr[], int lo, int hi, int *max, int *min) {
	count++;
    if (lo == hi) {
        // Single element case
        *max = arr[lo];
        *min = arr[lo];
    } else if (lo == hi - 1) {
        // Two elements case
        if (arr[lo] > arr[hi]) {
            *max = arr[lo];
            *min = arr[hi];
        } else {
            *max = arr[hi];
            *min = arr[lo];
        }
    } else {
        // Recursive case
        int mid = (lo + hi) / 2;
        int max1, min1, max2, min2;

        // Recursively find max and min in both halves
        findMaxMin(arr, lo, mid, &max1, &min1);
        findMaxMin(arr, mid + 1, hi, &max2, &min2);

        // Combine results
        *max = (max1 > max2) ? max1 : max2;
        *min = (min1 < min2) ? min1 : min2;
    }
}

int main() {
    int max, min;
    findMaxMin(arr, 0, 4, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("%d",count);

    return 0;
}

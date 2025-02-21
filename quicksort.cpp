#include <stdio.h>


void print(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


void swap(int arr[], int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}


int partition(int arr[], int lo, int hi) {
    int pivot = arr[lo]; // Choosing the first element as the pivot
    int pidx = lo;       // Pivot index
    int sc = 0;          // Smaller count

    // Count elements smaller than or equal to the pivot
    for (int i = lo + 1; i <= hi; i++) {
        if (arr[i] <= pivot) sc++;
    }

    // Place the pivot in its correct position
    int ci = pidx + sc; // Correct index of pivot
    swap(arr, pidx, ci);

    // Partitioning process
    int i = lo, j = hi;
    while (i < ci && j > ci) {
        if (arr[i] <= pivot) {
            i++;
        } else if (arr[j] > pivot) {
            j--;
        } else {
            swap(arr, i, j);
        }
    }

    return ci; // Return the index of the pivot
}

// QuickSort function
void qsort(int arr[], int lo, int hi) {
    if (lo >= hi) return; // Base case

    // Partition the array and get the pivot index
    int idx = partition(arr, lo, hi);

    // Recursively sort the subarrays
    qsort(arr, lo, idx - 1);
    qsort(arr, idx + 1, hi);
}

// Main function
int main() {
    int arr[] = {4, 7, 9, 3, 1, 2, 8, 0, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    print(arr, len);

    qsort(arr, 0, len - 1);

    printf("Sorted array:\n");
    print(arr, len);

    return 0;
}

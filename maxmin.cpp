#include<stdio.h>
//int arr[5]={8,9,6,2,0};
//int max1 =0;
//int max2 =0;
//int min1 =0;
//int min2 =0;
//int max =arr[4];
//int min =arr[4];
//void mergesort(int arr[],int lo,int hi)
//{
//	if(lo==hi) max1=min1=arr[lo];
//	else if(lo==hi-1)
//	{
//		if(arr[lo]>arr[hi-1])
//		{
//			max2 = arr[lo];
//			min2 = arr[hi-1];	
//		}
//		else
//		{
//			max2 = arr[hi-1];
//			min2 = arr[lo];
//		}	
//	} 
//	else
//	{
//		int mid = (hi+lo)/2;
//		mergesort(arr,lo,mid);
//		mergesort(arr,mid+1,hi);
//		if(max1>max2)
//		{
//			if(max<max1)	max =	max1;
//		}
//		else 
//		{
//			if(max<max2) max = max2;
//		}
//		if(min1 < min2)
//		{
//			if(min > min1)min = min1;
//		}
//		else
//		{
//		 	if(min > min2)min = min2;
//		}
//	}
//}
//int main()
//{
//	mergesort(arr,0,4);
//	printf("%d\n",max);
//	printf("%d\n",min);
//	return 0;
//}




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

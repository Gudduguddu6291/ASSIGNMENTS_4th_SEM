#include<stdio.h>
void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int arr[],int i,int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

void heapify(int arr[],int i,int n)
{
	int largest =i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left<n && arr[left]>arr[largest]) largest =left;
	if(right<n && arr[right]>arr[largest]) largest=right;
	if(largest!=i)
	{
		swap(arr,i,largest);
		heapify(arr,largest,n);
	}
	
}


void heapsort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--) heapify(arr,i,n);
	for(int i = n-1;i>0;i--)
	{
		swap(arr,i,0);
		heapify(arr,0,i);
	}
}


	


int main()
{
	int arr[]={12,8,0,81,12,1,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	heapsort(arr,n);
	print(arr,n);
	return 0;
}
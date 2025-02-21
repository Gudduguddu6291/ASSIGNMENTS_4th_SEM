#include<stdio.h>
void display(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void selectionsort(int arr[],int n)
{
	for(int i =0;i<n-1;i++)
	{
		int min = arr[i];
		int mi=-1;
		for(int j=i;j<n;j++)
		{
			if(min>arr[j]) 
			{
				min =arr[j];
				mi = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[mi];
		arr[mi] = tmp;
	}
	
	
}
int main()
{
	int n =0;
	printf("Enter the no of element");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements before sorting\n");
	display(arr,n);
	printf("\n");
	selectionsort(arr,n);
	printf("\n");
	printf("Elements after sorting\n");
	display(arr,n);
	return 0;
}
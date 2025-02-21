#include<stdio.h>
void display(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void insertionsort(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		for(int j =i;j>=0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				int tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
		}
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
	insertionsort(arr,n);
	printf("\n");
	printf("Elements after sorting\n");
	display(arr,n);
	return 0;
}
#include<stdio.h>
void display(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void bubblesort(int arr[],int n)
{
	int tmp=0;
	for(int i =0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp = arr[j+1];
				arr[j+1]=arr[j];
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
	bubblesort(arr,n);
	printf("\n");
	printf("Elements after sorting\n");
	display(arr,n);
	return 0;
}
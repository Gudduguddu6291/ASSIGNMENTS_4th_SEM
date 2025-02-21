#include<stdio.h>
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void merge(int a[],int n1,int b[],int n2,int arr[])
{
	int i,j,k=0;
	while(i<n1 && j<n2)
	{
		if(a[i]<=b[j])	arr[k++] =a[i++];
		else	arr[k++] =b[j++];
	}	
	while(i<n1) arr[k++]=a[i++];
	while(j<n2) arr[k++]=b[j++];
}
void mergesort(int arr[],int len)
{
	if(len==1) return;
	int a[len/2];
	int b[len-len/2];
	for(int i=0;i<len/2;i++)	a[i] = arr[i];
	for(int j=0;j<len-len/2;j++)	b[j] = arr[len/2+j];
	mergesort(a,len/2);
	mergesort(b,len-len/2);
	merge(a,len/2,b,len-len/2,arr);
}
int main()
{
	int arr[] ={9,0,4,6,7,1,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	print(arr,size);
	mergesort(arr,size);
	print(arr,size);
	return 0;
}
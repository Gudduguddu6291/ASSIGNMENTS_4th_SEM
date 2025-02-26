#include<stdio.h>
#include<stdlib.h>


void dfs(int i,int visited[],int a[7][7])
{
	int j=0;
	printf("%d",i);
	visited[i] =1;
	for(j=0;j<7;j++)
	{
		if(a[i][j]==1 && visited[j]==0) dfs(j,visited,a);
	}
}


int main()
{
	int root =0;
	int visited[7] ={0,0,0,0,0,0,0};
	int a[7][7] ={
		{0,1,1,1,0,0,0},
		{1,0,1,0,0,0,0},
		{1,1,0,1,1,0,0},
		{1,0,1,0,1,0,0},
		{0,0,1,1,0,1,1},
		{0,0,0,0,1,0,0},
		{0,0,0,0,1,0,0}
	};
	dfs(root,visited,a);
	return 0;
}
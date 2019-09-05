#include<iostream>
using namespace std;

int n;	
int visited[100];
int adjacent[100][100];

void dfs(int v)
{
	cout<<(v+1);
	visited[v]=1;

	for(int i=0;i<n;i++)
		if(adjacent[v][i]==1 && visited[i]==0)
			dfs(i);
	
	cout<<endl<<endl;
}

int main()
{
	
	cout<<"Enter the number of elements:";
	cin>>n;
	
	cout<<"Enter adjacent matrix:";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>adjacent[i][j];


	for(int i=0;i<n;i++)
		visited[i]=0;

	for(int i=0;i<n;i++)
		if(visited[i]==0)
			dfs(i);

	return 0;
}

#include<iostream>
using namespace std;
int c[100][100], dist[100], vis[100], n, u;

void dijkstras(int src)
{
	for(int j=1;j<=n;j++)
	{
		dist[j]=c[src][j];	
	}

	for(int j=1;j<=n;j++)
		vis[j]=0;

	dist[src]=0;
	vis[src]=1;
	int count=1;

	while(count!=n)
	{
		int min=9999;
		for(int j=1;j<=n;j++)
		{
			if(dist[j]<min && vis[j]!=1)
			{
				min=dist[j];
				u=j;
			}
		}
		vis[u]=1;
		count++;

		for(int j=1;j<=n;j++)
		{
			if(min+c[u][j]<dist[j] && vis[j]!=1)
				dist[j]=min+c[u][j];
		}
	}

	cout<<"Shortest dist is:";
	for(int j=1;j<=n;j++)
		cout<<src<<"-"<<j<<":"<<dist[j]<<", ";
}

int main()
{
	int s;
	cout<<"Enter size:";
	cin>>n;

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>c[i][j];
	cout<<"Enter source:";
	cin>>s;
	dijkstras(s);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int V[100][100],n;

int knapsack(int w[],int v[], int W)
{
	for(int i=0;i<=n;i++)
		V[i][0]=0;
	for(int i=1;i<=W;i++)
		V[0][i]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(j-w[i]>=0)
			{
				V[i][j]=max(V[i-1][j],v[i] + V[i-1][j-w[i]]);
			}
			else{
				V[i][j]=V[i-1][j];
			}
		}
	}
	return V[n][W];
}

int main()
{
	cout<<"Enter no of elements:";
	cin>>n;
	int w[n], v[n], W;
	cout<<"Enter weights:";
	for(int i=1;i<=n;i++)
		cin>>w[i];
	cout<<"Enter values:";
	for(int i=1;i<=n;i++)
		cin>>v[i];
	cout<<"Enter limit:";
	cin>>W;
	int value=knapsack(w,v,W);

	cout<<"value:"<<value<<endl;
	return 0;
}

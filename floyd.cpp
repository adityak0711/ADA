#include<bits/stdc++.h>
using namespace std;
int a[100][100], n;

void floyds()
{
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
			}
		}
	}
	cout<<"Result is:";

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	cout<<"Enter size:";
	cin>>n;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	cout<<endl;

	floyds();
	return 0;
}

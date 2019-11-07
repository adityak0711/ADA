#include<bits/stdc++.h>
using namespace std;
int c[100][100],elec[100], n;

void Prims()
{
	int ne = 0;
	int mincost = 0;
	int u,v, min;
	for(int i=1; i<=n; i++)
	{
		elec[i] = 0;
	}
	elec[1] = 1;
	while( ne != n-1)
	{
		min = 9999;
		for(int i = 1; i<=n; i++)
			for(int j = 1; j<=n;j++)
				if(elec[i] == 1)
					if(c[i][j] < min){
						min = c[i][j];
						u = i;
						v = j;
					}
		if(elec[v] != 1)
		{

			elec[v] = 1;
			ne++;
			mincost = mincost + min;
		}
		c[u][v] = 9999;
		c[v][u] = 9999;
	}
	cout<<"Minimum cost is:  "<<mincost<<endl;
	return;
}

int main()
{
	cout<<"Enter size: ";
	cin>>n;
	cout<<n<<"Enter matrix: \n";
	for(int i = 1; i<=n ; i++)
		{
			for(int j = 1; j<=n ;j++)
				cin>>c[i][j];
		}
	for(int i = 1; i<=n ; i++)
                {
                        for(int j = 1; j<=n ;j++)
                                if(c[i][j] == -1)
					c[i][j] = 10000;
                }

	cout<<endl;
	
	Prims();
	return 0;
}

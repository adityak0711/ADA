#include<iostream>
using namespace std;
int x[100];


bool place(int k,int i)
{
	for(int j=1; j<=k-1; j++)
	{
		if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))
			return false;
	}
	return true;
}

void NQueens(int k,int n)
{
	for(int i=1; i<=n; i++)
	{
		if(place(k,i))
		{
			x[k]=i;
			if(k==n)
			{
				for(int z=1; z<=n; z++)
				{
					cout<<x[z];
					cout<<",";				
				}
				cout<<endl;
			}
			else
				NQueens(k+1,n);
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the no of queens:"<<endl;
	cin>>n;
	NQueens(1,n);

	return 0;
}


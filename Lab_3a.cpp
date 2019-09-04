#include<iostream>
using namespace std;


int partition(int a[],int l, int r)
{
	int p=a[l];
	int i=l,j=r+1;

	do{
		do{
			i=i+1;
		}while(a[i]<=p && i<r);

		do{
			j=j-1;
		}while(a[j]>=p && j>l);

		if(i<j){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);

	a[l]=a[j];
	a[j]=p;
	return j;
}

void quicksort(int a[], int l, int r)
{
	int s;
	if(l<r)
	{
		int s= partition(a,l,r);
		quicksort(a,l,s-1);
		quicksort(a,s+1,r);
	}
}


int main()
{
	int n;
	cout<<"enter a no.:";
	cin>>n;

	int arr[n];
	cout<<"enter the elements:";

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	quicksort(arr,0,n-1);

	cout<<"Sorted Elements are:";
	for(int j=0;j<n;j++){
		cout<<arr[j]<<endl;
	}
}

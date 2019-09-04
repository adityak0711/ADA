#include<iostream>
using namespace std;

void combine(int a[], int l, int mid, int h)
{
	int i=l, j=mid+1, k=l;
	int c[100];

	while(i<=mid && j<=h) {
		if (a[i]<a[j]){
			c[k]=a[i]; 
			k=k+1;
			i=i+1;
		}

		else{
			c[k]=a[j] ;
			k=k+1 ;
			j=j+1;
		}	
	}

	if (i>mid){
		while (j<=h)
		{ 
			c[k]=a[j]; 
			k=k+1; 
			j=j+1; 
		}
	}
	
	if (j>h){
		while (i<=mid) 
		{
			c[k]=a[i]; 
			k=k+1; 
			i=i+1; 
		}
	}

	for (int z=l;z<h;z++)
	{ 
		a[z]=c[z]; 
	}
}


void mergesort(int a[], int l, int h)
{
	if(l<h){
		int mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		combine(a,l,mid,h);
	}
}

int main()
{
	int n;
	cout<<"enter no:";
	cin>>n;

	int arr[n];
	cout<<"enter the elemets:";

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	mergesort(arr,0,n-1);

	cout<<"sorted elements are:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

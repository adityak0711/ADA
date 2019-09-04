#include<iostream>
using namespace std;

void merge(int B[],int B_size,int C[],int C_size,int A[])
{
	int i=0,j=0,k=0;
	while(i<B_size && j<C_size)
	{
		if(B[i]<C[j])
			A[k++]=B[i++];
		else
			A[k++]=C[j++];
	}
	
	if(i==B_size)
	{
		while(j!=C_size)
			A[k++]=C[j++];
	}
	
	else if(j==C_size)
	{
		while(i!=B_size)
			A[k++]=B[i++];
	}
	
}

void mergesort(int A[],int n)
{
	int B[n];
	int C[n];
	int B_size=0,C_size=0;
	int index=0;
	for(int i=0;i<(n/2);i++)
		{
			B[index++]=A[i];
			B_size++;
		}
	index=0;
	for(int i=(n/2);i<n;i++)
	{
		C[index++]=A[i];
		C_size++;
	}
	/*cout<<"B : "<<B_size<<endl;
	cout<<"C : "<<C_size<<endl;*/
	if(B_size>1)
		mergesort(B,B_size);
	if(C_size>1)
		mergesort(C,C_size);
	merge(B,B_size,C,C_size,A);
}

int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	mergesort(arr,n);
	
	cout<<"Sorted : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl; 
}

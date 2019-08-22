#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no. of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int k,y;
	cout<<"Enter k:";
	cin>>k;

	for(int j=0;j<k;j++){
		int small=arr[j];

		for(int x=j+1;x<n;x++){
			if(small>arr[x]){
				small=arr[x];
				y=x;
			}
		}
		int temp=arr[y];
		arr[y]=arr[j];
		arr[j]=temp;
	}

	cout<<arr[k-1];

	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no. of elements:";
	cin>>n;

	int arr[n];
	cout<<"Enter array elements";

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int k,x;
	cout<<"Enter k:";
	cin>>k;

	for(int j=0;j<k;j++){
		int large=arr[j];

		for(int z=j+1;z<n;z++){
			if(large<arr[z]){
				large=arr[z];
				x=z;
			}
		}

		int temp=arr[x];
		arr[x]=arr[j];
		arr[j]=temp;
	}

	for(int i=0;i<k;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}


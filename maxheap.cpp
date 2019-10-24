#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n){
	for(int i =0; i<=n/2; i++){
		if(2*i+1 <n && arr[2*i+1]> arr[i]) 
			return false;
		if(2*i+2 <n && arr[2*i+2]>arr[i])
			return false;
	}
	return true;
}

int main(){
	int n; 
	cout<<"Enter no of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements :\n";
	for(int i =0; i<n; i++)
		cin>>arr[i];
	if(isMaxHeap(arr,n))
		cout<<"True\n";
	else
		cout<<"False\n";
	return 0;
}

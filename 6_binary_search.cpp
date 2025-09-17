//Write a program to implement binary search in a sorted array.

#include<iostream>
using namespace std;
int main(){
	int arr[]={2,3,4,5,9,1,1,1,1,22,3,4,8,56};
	int size=sizeof(arr)/sizeof(arr[0]);
	int target=2;
	int st=0;
	int end=size-1;
	for(int i=0;i<size;i++){
		int mid=(st+end)/2;
		if(target==arr[mid]){
			cout<<target<<" is at index "<<mid;
			return 0;
		}
		else if(target<arr[mid]){
			st=0;
			end=mid;
		}
		else{
			st=mid+1;
			end=size-1;
		}
	}
	cout<<"Element not found";
}

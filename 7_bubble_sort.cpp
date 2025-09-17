//Write a program to sort an array in ascending order using
//bubble sort.

#include<iostream>
using namespace std;
int main(){
	int arr[]={8,5,6,7,91,4,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

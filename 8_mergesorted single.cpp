//Write a program to merge two arrays into a single sorted array.

#include<iostream>
using namespace std;
int main(){
	int arr1[]={44,6,14,7,9};
	int arr2[]={3,8,5,88,1};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	int n=n1+n2;
	int arr[n];
	int k=0;
	for(int i=0;i<n1;i++){
		arr[k++]=arr1[i];
	}
	k=0;
	for(int i=0;i<n2;i++){
		arr[n1+k]=arr2[i];
		k++;
	}
	cout<<"Merged array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Sorted merged array "<<endl;
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

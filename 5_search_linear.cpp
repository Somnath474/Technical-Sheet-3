//Write a program to search an element in an array using linear
//search.

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int num;
	cin>>num;
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			cout<<"Element found";
			return 0;
		}
	}
	cout<<"Element not found";
}

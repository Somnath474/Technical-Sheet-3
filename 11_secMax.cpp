//11 Write a program to find the second largest element in an array.

#include<bits/stdc++.h>
using namespace std;
int main(){
	int max=INT_MIN;
	int secMax;
	int arr[]={8,4,9,7,8,22,44,8,599,55,444,7,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			secMax=max;
			max=arr[i];
		}
		if(arr[i]<max && secMax<arr[i]){
			secMax=arr[i];
		}
	}
	cout<<secMax;
}

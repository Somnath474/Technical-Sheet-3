//14 Write a program to multiply two matrices. 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	int arr1[50][50];
	int c,d;
	cin>>c;
	cin>>d;
	int arr2[50][50];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr1[i][j];
		}
	}
	
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<endl;
	if(b!=c){
		return 0;
	}
	int arr3[50][50];
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			arr3[i][j]=0;
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			for(int k=0;k<b;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
}

// Write a program to check if two matrices are equal.

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	int arr1[a][b];
	int c,d;
	cin>>c;
	cin>>d;
	int arr2[c][d];
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
	if(a!=c && b!=d){
		cout<<"Matrix are not equal";
		return 0;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			if(arr1[i][j]!=arr2[i][j]){
				cout<<"Matrix are not equal";
				return 0;
			}
		}
	}
	cout<<"The matrix are equal";

	}

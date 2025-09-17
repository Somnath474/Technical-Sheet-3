//13 Write a program to transpose a matrix. 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	int arr1[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr1[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Transpose of matrix is"<<endl;
	for(int j=0;j<b;j++){
		for(int i=0;i<a;i++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

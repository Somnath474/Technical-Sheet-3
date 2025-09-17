//Write a program to calculate row-wise and column-wise sum of 
//a 2D array. 

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
	cout<<"Elements of matrix is:"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<a;i++){
		int rowsum=0;
		for(int j=0;j<b;j++){
			rowsum=rowsum+arr1[i][j];
		}
		cout<<"sum of row "<<i+1<<" is "<<rowsum; 
		cout<<endl;
	}
	
	for(int j=0;j<b;j++){
		int colsum=0;
		for(int i=0;i<a;i++){
			colsum+=arr1[i][j];
		}
		cout<<"sum of col "<<j+1<<" is "<<colsum<<endl;
	}
	
	
}

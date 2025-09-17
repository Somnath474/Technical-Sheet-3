//write a program to find the largest number in a upper triiangle of 2D matrix;

#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	int largest=INT_MIN;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		for(int j=i;j<3;j++){
			if(i<=j){
				if(arr[i][j]>largest){
					largest=arr[i][j];
				}
			}
				
		}
	}
	cout<<largest;
}

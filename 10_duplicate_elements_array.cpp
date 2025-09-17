//10 Write a program to find duplicate elements in an array. 
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[]={1,1,4,1,1,2,2,3,1,3,4,5,6,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	 vector<int>hlo;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				bool check=false;
				for(int k=0;k<hlo.size();k++){
					if(arr[i]==arr[k]){
						check=true;
						break;
					}
				}
				if(!check)
				hlo.push_back(arr[i]);
				}
				
			}
		}
			for(int i=0;i<hlo.size();i++){
		cout<<hlo[i]<<" ";
	
	}
}

//16 Write a program to print a right-angled triangle star pattern. 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

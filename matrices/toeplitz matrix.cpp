#include<iostream>
using namespace std;

int index(int i, int j, int n){
	if(i<=j){
		return j-i;
	}else{
		return n+i-j-1;
	}
}

int main(){
	
	int a[4][4] = {0};
	int n = 4;
	int val[2*n-1];
	for(int i=0;i<2*n-1;i++){
		cin>>val[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = val[index(i,j,n)];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	
	int a[4][4] = {0};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if((j == i ||j == i-1 || j == i+1) && (j>=0)){
				cin>>a[i][j];
			}
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k=0;
	
	for(int i=1;i<=n;i++){
		k=i;
		for(int j=1;j<=k;j++){
			cout<<j;
		}
		for(int j=0;j<n-k;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

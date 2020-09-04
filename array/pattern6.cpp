#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m = n/2;
	int c= m;
	int k=1;
	while(m!=-1){
		for(int i=m;i>=1;i--){
		cout<<" ";
		}
		for(int j=1;j<=k;j++){
			cout<<"*";
		}
		k+=2;
		cout<<endl;
		m--;
	}
	k=n-2;
	m=1;
	while(m <=c){
		for(int i=m;i>=1;i--){
		cout<<" ";
		}
		for(int j=1;j<=k;j++){
			cout<<"*";
		}
		k-=2;
		cout<<endl;
		m++;
	}
	return 0;
}

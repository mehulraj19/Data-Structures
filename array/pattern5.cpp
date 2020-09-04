#include<iostream>
using namespace std;

int main(){
	int n=9;
	int k=1;
	string s = ".|.";
	for(int i=3;i>=1;i--){
	
		for(int j=1;j<=3*i;j++){
			cout<<"-";
		}
		for(int j=1;j<=k;j++){
			cout<<s;
		}
		for(int j=1;j<=3*i;j++){
			cout<<"-";
		}
		k+=2;
		cout<<endl;
	}
	cout<<"-------WELCOME-------"<<endl;
	k=5;
	for(int i=1;i<=3;i++){
	
		for(int j=1;j<=3*i;j++){
			cout<<"-";
		}
		for(int j=1;j<=k;j++){
			cout<<s;
		}
		for(int j=1;j<=3*i;j++){
			cout<<"-";
		}
		k-=2;
		cout<<endl;
	}
	return 0;
}

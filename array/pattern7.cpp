#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m = n;
	int k=1;
	int l=n;
		while(l!=1){
		for(int i=1;i<=k;i++){
			cout<<" ";
		}
		for(int i=1;i<=l;i++){
			cout<<"* ";
		}
		l--;
		k++;
		cout<<endl;
	}
	l=1;
	while(l!=n+1){
		for(int i=1;i<=k;i++){
			cout<<" ";
		}
		for(int i=1;i<=l;i++){
			cout<<"* ";
		}
		l++;
		k--;
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int ar[7][21];
	for(int i=0;i<7;i++){
		for(int j=0;j<21;j++){
			cout<<"-";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	for(int i=0;i<7;i++){
		for(int j=0;j<21;j++){
			if(i>=j){
				cout<<"-";
			}
		}
		cout<<endl;
	}
	
	for(int i=0;i<7;i++){
		for(int j=0;j<21;j++){
			if(i+j>=21){
				cout<<"-";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	int k = 21/2;
	for(int i=0;i<7;i++){
		
		for(int j=0;j<k;j++){
			cout<<" ";
		}
		k--;
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}

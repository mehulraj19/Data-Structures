#include<iostream>
using namespace std;

void set_array(int A[], int n){
	
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
}

void display(int A[], int n){
	
	for(int i=0;i<n;i++){
		cout<<A[i]<<"  ";
	}
}

int max(int A[], int n){
	int m = 0;
	for(int i=0;i<n;i++){
		if(m<A[i]){
			m = A[i];
		}
	}
	return m;
}
void set_hash(int hash[], int m){
	for(int i=0;i<m;i++){
		hash[i] = 0;
	}
}
void missing_elements(int A[], int n){
	
	int m = max(A,n);
	int hash[m];
	set_hash(hash,m);
	for(int i=0;i<n;i++){
		hash[A[i]] = 1;
	}
	cout<<"\n missing elements are: ";
	for(int i=0;i<m;i++){
		if(hash[i]!=1){
			cout<<i<<"  ";
		}
	}
}

int main(){
	
	int A[5];
	set_array(A,5);
	display(A,5);
	cout<<endl;
	missing_elements(A,5);
}

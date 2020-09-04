#include<iostream>
using namespace std;


int max(int A[], int n){
	int m = 0;
	for(int i=0;i<n;i++){
		if(m<A[i]){
			m = A[i];
		}
	}
	return m;
}

void display(int b[],int m){
	for(int i=0;i<m;i++){
		cout<<b[i]<<"  ";
	}
}

void setHash(int hash[], int m){
	for(int i=0;i<m;i++){
		hash[i] = 0;
	}
}

void find_duplicates(int A[], int n){
	int m = max(A,n);
	int hash[m];
	setHash(hash,m);
	for(int i=0;i<n;i++){
		hash[A[i]]++;
	}
	for(int i=0;i<m;i++){
		if(hash[i] >1){
			cout<<i<<"  ";
		}
	}
}

void counting_duplicates(int A[],int n){
	int m = max(A,n);
	int count = 0;
	int hash[m];
	setHash(hash,m);
	for(int i=0;i<n;i++){
		hash[A[i]]++;
	}
	for(int i=0;i<m;i++){
		if(hash[i] >1){
			count++;
		}
	}	
	cout<<count;
}
int main(){
	int A[9] = {1,2,3,4,4,6,6,8,9};
	find_duplicates(A,9);
	cout<<endl;
	counting_duplicates(A,9);
	return 0;
}

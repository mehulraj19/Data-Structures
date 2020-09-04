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
		if(b[i] != 0){
			cout<<i<<"  ";
		}
	}
}

void setHash(int hash[], int m){
	for(int i=0;i<m;i++){
		hash[i] = 0;
	}
}

void findingPair(int A[], int n, int key){
	int m = max(A,n);
	int hash[m+1];
	setHash(hash,m+1);
	for(int i=0;i<n;i++){
		int j = 0;
		while(j<n){
			if(key-A[i] == A[j]){
				hash[A[i]]++;
			}
			j++;
		}
	}
	display(hash,m+1);
}
int main(){
	int A[5] = {1,2,3,4,0};
	int k = 7;
	findingPair(A,5,k);
	return 0;
}

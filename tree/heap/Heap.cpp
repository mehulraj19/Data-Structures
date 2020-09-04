#include<iostream>
using namespace std;

void insert(int A[], int n){
	int temp, i=n;
	temp = A[n];
	while(i>1 && temp > A[i/2]){
		A[i] = A[i/2];
		i = i/2;
	}
	A[i] = temp;
}

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void deletion(int A[], int n){
	int x,i,j;
	x= A[n];
	A[1] = A[n];
	i=1;
	j=2*i;
	while(j < n-1){
		if(A[j+1] > A[j]){
			j = j+1;
		}
		if(A[i] < A[j]){
			swap(&A[i],&A[j]);
			i = j;
			j = 2*j;
		}
	}
}

void display(int A[], int n){
	for(int i=1;i<n;i++){
		cout<<A[i]<<"  ";
	}
	cout<<endl;
}

void create(){
	int A[] = {0,10,20,30,25,5,40,35};
	int n=7;
	for(int i=2;i<8;i++){
		insert(A,i);
	}
	display(A, n);
	deletion(A,n);
	display(A,n-1);
}

int main(){
	create();
	return 0;
}

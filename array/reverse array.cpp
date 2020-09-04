#include<iostream>
using namespace std;

void display(int B[], int n){
	
	for(int i=0;i<n;i++){
		cout<<B[i]<<"  ";
	}
}

void swap(int *a, int *b){
	
	int c = *a;
	*a = *b;
	*b = c;
}

void reverse_method1(int A[],int n){
	int B[n];
	
	int i,j=0;
	
	for(int i=n-1;i>=0;i--){
		B[j] = A[i];
		j++;
	}
	display(B,n);
}

void reverse_method2(int A[],int n){
	int i=0,j = n-1;
	
	for(;i<n/2,j>n/2;i++,j--){
		swap(&A[i],&A[j]);
	}
	display(A,n);
	
}

int main(){
	
//	enter code here....

	int A[5] = {1,2,3,4,5};
	
	reverse_method2(A,5);
	return 0;
}

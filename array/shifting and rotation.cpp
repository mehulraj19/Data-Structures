#include<iostream>
using namespace std;

void display(int A[], int n){
	
	for(int i=0;i<n;i++){
		cout<<A[i]<<"  ";
	}
}
int B[100];
void copy(int A[],int n){
	for(int i=0;i<n;i++){
		B[i] = A[i];
	}
}

void leftShift(int A[],int n){
	for(int i=1;i<n;i++){
		A[i-1] = A[i];
	}
	A[n-1] = 0;
	display(A,n);
}

void leftRotate(int A[], int n){
	int c = A[0];
	for(int i=1;i<n;i++){
		A[i-1] = A[i];
	}
	A[n-1] = c;
	display(A,n);
}

void rightShift(int A[], int n){
	copy(A,n);
	for(int i=0;i<n-1;i++){
		A[i+1] = B[i];
	}
	A[0] = 0;
	display(A,n);
}

void rightRotate(int A[], int n){
	copy(A,n);
	int c = A[n-1];
	for(int i=0;i<n-1;i++){
		A[i+1] = B[i];
	}
	A[0] = c;
	display(A,n);
}

int main(){
	int A[5] = {1,2,3,4,5};
//	leftShift(A,5);
//	leftRotate(A,5);
//	rightShift(A,5);
	rightRotate(A,5);
	return 0;
}

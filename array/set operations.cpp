#include<iostream>
using namespace std;

void display(int A[], int b){
	for(int i=0;i<b;i++){
		cout<<A[i]<<"   ";
	}
}

void Union(int A[], int n, int B[], int m){
	int i,j,k;
	int C[n+m];
	i=j=k=0;
	
	while(i<n && j<m){
		if(A[i]<B[j]){
			C[k++] = A[i++];
		}else if(A[i] > B[j]){
			C[k++] = B[j++];
		}else{
			C[k++] = A[i++];
			j++;
		}
	}
	for(;i<n;i++){
		C[k++] = A[i];
	}
	for(;j<m;j++){
		C[k++] = B[j];
	}
	display(C,k);
}

void Intersection(int A[], int n, int B[], int m){
	int i,j,k;
	int C[n+m];
	i=j=k=0;
	while(i<n && j<m){
		if(A[i] < B[j]){
			i++;
		}else if(A[i] > B[j]){
			j++;
		}else{
			C[k++] = A[i++];
			j++;
		}
	}
	display(C,k);
}

void Difference(int A[], int n, int B[], int m){
	int i,j,k;
	int C[n+m];
	i=j=k=0;
	while(i<n && j<m){
		if(A[i]< B[j]){
			C[k++] = A[i++];
		}else if(A[i] > B[j]){
			C[k++] = B[j++];
		}else{
			i++;
			j++;
		}
	}
	display(C,k);
}

int main(){
//	enter code here....
	return 0;
}

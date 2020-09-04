#include<iostream>
using namespace std;

void display(int C[], int k){
	for(int i=0;i<k;i++){
		cout<<C[i]<<"  ";
	}
}

void merging_array(int A[],int n, int B[], int m){
	int C[n+m];
	int i,j,k;
	i=j=k=0;
	while(i<n && j<m){
		if(A[i]<=B[j]){
			C[k++] = A[i++];
		}else if(A[i] > B[j]){
			C[k++] = B[j++];
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

int main(){
	int A[5] = {6,7,8,9,10};
	int B[5] = {1,2,3,4,5};
	merging_array(A,5,B,5);
	return 0;
}

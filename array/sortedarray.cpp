#include<iostream>
using namespace std;

void insertionSortedArray(int A[],int n,int val){
	int i = n-1;
	while(A[i]>val){
		A[i+1] = A[i];
		i--;
	}
	A[i+1] = val;
	n++;
}
bool checkSortedArray(int A[], int n){
	for(int i=0;i<n;i++){
		if(A[i+1] < A[i]){
			return false;
		}
	}
	return true;
}
int main(){
//	enter code here....
	return 0;
}

#include <iostream>
using namespace std;

int c[10];
void mergeSort(int a[], int b[], int len1, int len2, int n){
	int i,j,k;
	i=j=k=0;
	while(i<len1 && j<len2){
		if(a[i] < b[j]){
			c[k++] = a[i++];
		}else{
			c[k++] = b[i++];
		}
	}
	for(;i<len1;i++){
		c[k++] = a[i++];
	}
	for(;j<len2;j++){
		c[k++] = b[j++];
	}
}

void Sorting(int Ar[], int n){
	int mid = n/2;
	int a[mid],b[mid],k=0;
	for(int i=0;i<mid;i++){
		a[i] = Ar[i];
	}
	for(int i= mid+1; i<n; i++){
		b[k++] = Ar[i];
	}
	mergeSort(a,b,n/2,k,n);
}

void display(int Ar[], int n){
	for(int i=0; i<n ;i++){
		 cout<<Ar[i]<<"  ";
	}
	cout<<endl;
}

int main(){
	int Ar[] = {5,4,3,2,1};
	display(Ar, 5);
	Sorting(Ar,5);
	display(c, 5);
	return 0;
}





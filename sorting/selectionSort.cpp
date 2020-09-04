#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void SelectionSort(int Ar[], int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(Ar[i] > Ar[j]){
				swap(&Ar[i], &Ar[j]);
			}
		}
	}
}

void display(int Ar[], int n){
	for(int i=0;i<n;i++){
		cout<<Ar[i]<<"  ";
	}
	cout<<endl;
}
int main(){
	int Ar[] = {5,4,3,2,1};
	display(Ar,5);
	SelectionSort(Ar, 5);
	display(Ar, 5);
	return 0;
}

#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int BubbleSort(int Ar[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(Ar[j] > Ar[j+1]){
				swap(&Ar[j], &Ar[j+1]);
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
	BubbleSort(Ar,5);
	display(Ar,5);
	return 0;
}

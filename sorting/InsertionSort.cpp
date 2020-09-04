#include<iostream>
using namespace std;

void InsertionSort(int Ar[], int n){
	int i,j;
	for(int i=1;i<n;i++){
		j = i-1;
		int x = Ar[i];
		while(j>-1 && Ar[j]>x){
			Ar[j+1] = Ar[j];
			j--;
		}
		Ar[j+1] = x;
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
	InsertionSort(Ar,5);
	display(Ar,5);
	return 0;
}

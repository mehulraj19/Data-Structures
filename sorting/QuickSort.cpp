#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int Ar[], int low, int high){
	int i = low;
	int pivot = Ar[low];
	int j = high;
	do{
		do{
			i++;
		}while(Ar[i] <= pivot);
		do{
			j--;
		}while(Ar[j] > pivot);
		if(i<j){
			swap(&Ar[i],&Ar[j]);
		}
	}while(i<j);
	swap(&Ar[low], &Ar[j]);
	return j;
}

void QuickSort(int Ar[], int low, int high){
	if(low < high){
		int j = partition(Ar, low, high);
		QuickSort(Ar,low,j);
		QuickSort(Ar, j+1, high);
	}
}

void display(int Ar[], int n){
	for(int i=0;i<n;i++){
		cout<<Ar[i]<<"  ";
	}
	cout<<endl;
}

int main(){
	int Ar[] = {5,4,3,2,1,INT_MAX};
	display(Ar,5);
	QuickSort(Ar, 0, 5);
	display(Ar,5);
	return 0;
}

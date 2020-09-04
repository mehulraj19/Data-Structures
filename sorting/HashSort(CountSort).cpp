#include<iostream>
using namespace std;

int hash[20]={0};
void HashSort(int Ar[], int n){
	int k=0;
	for(int i=0; i<n;i++){
		hash[Ar[i]]++;
	}
}

void display(int Ar[], int n){
	for(int i=0;i<n;i++){
		cout<<Ar[i]<<"  ";
	}
	cout<<endl;
}
void display1(int hash[]){
	for(int i=0;i<20;i++){
		if(hash[i] !=0){
			cout<<i<<"  ";
		}
	}
}
int main(){
	int Ar[] = {5,4,3,2,1};
	display(Ar,5);
	HashSort(Ar, 5);
	display1(hash);
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

void display(int Ar[], int n){
	for(int i=0;i<n;i++){
		cout<<Ar[i]<<"  ";
	}
	cout<<endl;
}

int main(){
	int Ar[] = {5,4,3,2,1};
	display(Ar,5);
	sort(Ar, Ar+5);
	display(Ar, 5);
	return 0;
}

#include<iostream>
using namespace std;

void pattern(){
	int A[4][4];
	int i,j;
	i=j=0;
	int k=0;
	A[0][0] = 1;
	int m = A[i][j]+1;
	k++;
	while(0<k && k<=6){
		
		if(k<=3){
			j=k;
			i=0;
		}else{
			j=3;
			i=k-3;
		}

		A[i][j] = m;
		int c = i;
		while(j!=c){
			j--;
			i++;
			m++;
			A[i][j]=m;
			
		}
		m++;
		k++;
	}
	i=j=0;
	for( i=0;i<4;i++){
		for( j=0;j<4;j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
}

int main(){
	pattern();
	return 0;
}

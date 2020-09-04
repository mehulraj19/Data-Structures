#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int ar[n][n] = {0};
	int i,j,c=0;
	int k=1;
	int m=n/2;
	m+=1;
	while(c < m){
		i=j=c;
	
		while(i < n-c){
			ar[i][j]=k;
			k++;
			i++;
		}
		j++;
		i--;
		cout<<i<<"    "<<j<<endl;
		while(j < n-c){
			ar[i][j] = k;
			k++;
			j++;
		}
		cout<<i<<"    "<<j<<endl;
		j--;
		while(i >= c){
			ar[i][j] = k;
			k++;
			i--;
		}
		cout<<i<<"    "<<j<<endl;
		i++;
		j--;
		while(j>c && j<n-1-c){
			ar[i][j] = k;
			k++;
			j--;
		}	
		cout<<i<<"    "<<j<<endl;
		c++;
	}
	
	for( i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<ar[i][j]<<"       ";
		}
		cout<<endl;
	}
	
	return 0;
}

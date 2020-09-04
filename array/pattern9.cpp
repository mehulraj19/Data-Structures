#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the Size of the Matrix: "<<endl;
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
		while(j < n-c){
			ar[i][j] = k;
			k++;
			j++;
		}
		j--;
		i--;
		
		while(i >= c){
			ar[i][j] = k;
			k++;
			i--;
		}
		i++;
		j--;
		while(j>c && j<n-1-c){
			ar[i][j] = k;
			k++;
			j--;
		}	

		c++;
	}
	cout<<endl<<endl<<"Your Output: "<<endl;
	for( i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<ar[i][j]<<"       ";
		}
		cout<<endl;
	}
	
	return 0;
}

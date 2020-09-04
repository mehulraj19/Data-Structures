#include<iostream>
using namespace std;

int main(){
	
//	initialization
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	
	int k;
	cin>>k;
	int br[n];

//	method1
	while(k--){
		for(int i=0;i<n;i++){
			br[i] = ar[i];
		}
		for(int i=0;i<n-1;i++){
			ar[i+1] = br[i];
		}
		ar[0] = br[n-1];
			
	}
	
// method2

	int j=0;
	for(int i=0;i<n;i++){
		br[i] = ar[i];
	}
	for(int i = k-1;i<n;i++){
		ar[j] = br[i];
		j++;
	}
	for(int i=0;i<k-1;i++){
		ar[j] = br[i];
		j++;
	}	
	
//	display
	for(int i=0;i<n;i++){
		cout<<ar[i]<<"  ";
	}
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	string s[n],str;
	for(int i=0;i<n;i++){
		cin>>str;
		s[i] = str;
	}
	for(int i=0;i<n;i++){
		int k = s[i].length();
		string s1,s2;
		for(int j=0;j<k;j++){
			if(j%2 == 0){
				s1 += s[i][j];
			}else{
				s2 += s[i][j];
			}
			
		}
		cout<<s1<<"  "<<s2<<endl;
	}
	return 0;
}

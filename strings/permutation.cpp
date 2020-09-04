#include<iostream>
using namespace std;

void permutation(string s, int k){
	
	int n = s.length();
	static int A[10] = {0};
	static char res[20];
	if(s[k] == '\0'){
		res[k] = '\0';
		cout<<res<<endl;
	}
	for(int i=0;i<n;i++){
		if(A[i] == 0){
			res[k] = s[i];
			A[i] = 1;
			permutation(s,k+1);
			A[i] = 0;
		}
	}

}

int main(){
	string s = "mehul";
	permutation(s,0);
	
	return 0;
}

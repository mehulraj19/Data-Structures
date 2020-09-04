#include<iostream>
using namespace std;

bool palindrome(string s){
	
	int n = s.length();
	for(int i=0,j=n-1; i<n/2,j>n/2; i++,j--){
		if(s[i] != s[j]){
			return false;
		}
	}
	return true;
	
}

int main(){
	
	string s  = "mehul";
	if(palindrome(s)){
		cout<<"Palindrome";
	}else{
		cout<<"Not Palindrome";
	}
	return 0;
	
}

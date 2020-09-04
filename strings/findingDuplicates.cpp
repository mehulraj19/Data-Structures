#include<iostream>
using namespace std;

void setHash(int hash[], int n){
	
	for(int i=0;i<n;i++){
		hash[i] = 0;
	}
	
}

void findingDuplicates(string s){
	
	int hash[26];
	setHash(hash,26);
	for(int i=0;i<s.length();i++){
		hash[s[i]-97]++;
	}
	for(int i=0;i<26;i++){
		if(hash[i]>1){
			char c = i+97;
			cout<<c<<"  ";
		}
	}
	
}

int main(){
	
	string s = "mehul will get success";
	findingDuplicates(s);
	return 0;
}


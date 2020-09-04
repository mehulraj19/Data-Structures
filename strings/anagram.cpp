#include<iostream>
using namespace std;

void sethash(int hash[], int n){
	for(int i=0;i<n;i++){
		hash[i] = 0;
	}
}

bool checkhash(int hash[],int n){
	for(int i=0;i<n;i++){
		if(hash[i]!=0){
			cout<<i;
			return false;
		}
	}
	return true;
}

bool anagram_method1(string s, string s1){
	
	int hash[26];
	sethash(hash,26);
	
	for(int i=0;i<s.length();i++){
		hash[s[i]-97]++;
	}
	for(int i=0;i<s1.length();i++){
		hash[s[i]-97]--;
	}
	return checkhash(hash,26);
}

bool anagram_method2(string s, string s1){
	
	char c = '1';
	for(int i=0;i<s.length();i++){
		for(int j=0;j<s1.length();j++){
			if(s[i] == s1[j]){
				s1[j] = c;
			}
		}
	}
	for(int i=0;i<s1.length();i++){
		if(s1[i]!='1'){
			return false;
		}
	}
	return true;
}

int main(){
	
	string s = "mehul";
	string s1 = "lehum";
	if(anagram_method2(s,s1)){
		cout<<"Anagram";
	}else{
		cout<<"not anagram";
	}
	return 0;
}

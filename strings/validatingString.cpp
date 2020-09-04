#include<iostream>
using namespace std;

bool securityChecking(string s,string actual_s){
	
	int x=0;
	if(s.length() == actual_s.length()){
		
		for(int i=0; i<s.length(); i++){
			if(s[i] != actual_s[i]){
				x=1;
				break;
			}
		}
		if(x==0){
			return true;
		}
	}
	return false;
}

bool validatingString(string s){
	
	for(int i=0;s[i]!='\0';i++){
		
		if(((s[i]>=97 && s[i]<=122)) || ((s[i]>=65 && s[i]<=90)) || ((s[i]>=48 && s[i]<=57))){
			continue;
		}else{
			return false;
		}
	}
	return true;
}

int main(){
	
	string p = "hello";
	string k = "helllo";
	if(securityChecking(p,k)){
		cout<<"Welcome!!"<<endl;
	}else{
		cout<<"Wrong!!"<<endl;
	}
	
	if(validatingString(p)){
		cout<<"Valid String";
	}else{
		cout<<"Invalid String";
	}
	return 0;
}

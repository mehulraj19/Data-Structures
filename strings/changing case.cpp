#include<iostream>
using namespace std;

string changingCase(string s){
	
	for(int i=0;s[i]!='\0';i++){
		
		if(s[i]<=90){
			s[i]+=32;
		}else{
			s[i]-=32;
		}
	}
	return s;
}

int main(){
	string s ="Mehul";
	cout<<s<<endl;
	s = changingCase(s);
	cout<<s;
	return 0;
}

#include<iostream>
using namespace std;

int length_method1(string s){
	
	int c = 0;
	for(int i=0; s[i]!='\0';i++){
		c++;
	}
	return c;
	
}

int length_formula(string s){
	return s.length();
}

int main(){
	string s = "mehul";
	int len = length_method1(s);
	cout<<len;
	len = length_formula(s);
	cout<<endl<<len;
	return 0;
} 

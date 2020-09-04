#include<iostream>
using namespace std;

void swap(char *a, char *b){
	char c = *a;
		*a = *b;
		*b = c;
}


string reversing_method1(string s){
	
	int n = s.length();
	char a[n];
	for(int i=0,j=n-1;i<n,j>=0;i++,j--){
		a[j] = s[i];
	}
	for(int i=0;i<n;i++){
		s[i] = a[i];
	}
	return s;
	
}

string reversing_method2(string s){
	
	int n=s.length();
	
	for(int i=0,j=n-1; i<n/2,j>n/2; i++,j--){
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return s;
}

int main(){
	
	string m ="mehul";
	string s = reversing_method1(m);
	cout<<s<<endl;
	s = reversing_method2(m);
	cout<<s;
	return 0;
	
}


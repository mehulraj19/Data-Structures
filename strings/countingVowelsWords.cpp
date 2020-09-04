#include<iostream>
using namespace std;

int countWords(string s){
	
	int c = 0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i] == ' '){
			c++;
		}
	} 
	return c+1;
}

int countVowels(string s){
	
	int c = 0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
			c++;
		}
	}
	return c;
}

int main(){
	string s = "mehul is awesome";
	int nwords = countWords(s);
	int nvowels = countVowels(s);
	cout<<nwords<<endl<<nvowels;
	return 0;
}

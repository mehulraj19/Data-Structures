#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isOperand(char c){
	if(c=='-'|| c=='+'||c=='/'||c=='*'){
		return false;
	}else{
		return true;
	}
}

int precedence(char c){
	if(c=='-'|| c=='+'){
		return 1;
	}else if(c=='/'||c=='*'){
		return 2;
	}
	return 0;
}

string InfixToPostfix(string infix){
	char p[20];
	string postfix;
	stack<char>st;
	st.push('#');
	int i=0,j=0;
	while(infix[i] != '\0'){
		if(isOperand(infix[i])){
			p[j++] = infix[i++];
		}else{
			if(precedence(infix[i]) > precedence(st.top())){
				st.push(infix[i++]);
			}else{
				if(!st.empty()){
					p[j++] = st.top();
					st.pop();
				}else{
					continue;
				}
				
			}
		}
	}
	while(!st.empty()){
		p[j++] = st.top();
		st.pop();
	}
	for( i=0;i<j-1;i++){
		postfix += p[i];
	}
	return postfix;
}

int main(){
	string str;
	cin>>str;
	string s = InfixToPostfix(str);
	cout<<s;
	return 0;
}

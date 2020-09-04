#include<iostream>
using namespace std;

class stack{
	public:
		char data;
		node* next;
		node(char data){
			this->data = data;
			next = NULL;
		}
};

bool isBalance(String exp){
	stack* st;
	for(int i=0; i< exp.length(); i++){
		if(exp[i] == '('){
			stack temp = new stack(exp[i]);
			if(st == NULL){
				st = temp;
			}else{
				st->next = temp;
				st = temp;
			}
		}
		if(exp[i] == ')'){
			stack temp = NULL;
			if(st == NULL){
				return false;
			}
			temp = st;
			sta = st->next;
			delete(temp);
		}
	}
	
	if(st == NULL){
		return true;
	}else{
		return false;
	}
}

int main(){
	return 0;
}

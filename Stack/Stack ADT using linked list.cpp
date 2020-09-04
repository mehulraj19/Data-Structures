#include<iostream>
using namespace std;

class stack{
	public:
		int data;
		node* next;
		node(int data){
			this->data = data;
			next = NULL;
		}
};

stack* st,top;

void push(int data){
	stack n;
	if(n == NULL){
		cout<<"Stack OverFlow";
	}else{
		n = new stack(data);
		n->next = top;
		top = n;
	}
}

int pop(){
	int x = top->data;
	if(top == NULL){
		cout<<"UnderFlow";
	}else{
		stack* p = top;
		top = top->next;
		delete p;
	}
	return x;
}

int peek(int pos){
	int x;
	stack* p = top; 
	while(pos--){
		p = p->next;
	}
	return p->data;
}

int main(){
	
}

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int data){
			this->data = data;
			next = NULL;
		}
};
class stack{
	public:
		int head = 0;
		int St[20];
		int pop(){
			int x = St[head];
			head--;
			return x;
		}
		int top(){
			return St[head];
		}
		void add(int data){
			St[head] = data;
			head++;
		}
		bool isEmpty(){
			if(head == 0){
				return true;
			}
			return false;
		}
};

node* insert_node(node* p, int data){
	node* n = new node(data);
	
	if(p == NULL){
		p = n;
	}else{
		n->next = p;
		p = n;
	}
	return p;
}

node* create_lst(){
	node* p = NULL;
	int data;
	cin>>data;
	while(data != -1){
		p = insert_node(p,data);
		cin>>data;
	}
	return p;
}

int count_nodesR(node* p){
	if(p != NULL){
		return count_nodesR(p->next) + 1;
	}else{
		return 0;
	}
}

void intersection_lst(node* p1, node* p2){

	stack st1, st2;
	
	while(p1 != NULL){
		st1.add(p1->data);
		p1 = p1->next;
	}
	while(p2!= NULL){
		st2.add(p2->data);
		p2 = p2->next;
	}
	
	while(st1.top() ==  st2.top()){
		int p = st1.pop();
		p = st2.pop();
	}
	cout<<st1.top();
}

void display(node* p){
	while(p != NULL){
		cout<<p->data<<"   ";
		p = p->next;
	}
}


int main(){
	node* k1 = NULL;
	k1 = create_lst();
	display(k1);
	cout<<endl;
	node* k2 = NULL;
	k2 = create_lst();
	display(k2);
	cout<<endl;
	intersection_lst(k1, k2);
	return 0;
}

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node* prev;
		node(int data){
			this->data = data;
			next = NULL;
			prev = NULL;
		}
};

node* insert_node(node* p, int data){
	node* n = new node(data);
	if(p == NULL){
		p=n;
	}else{
		n->next = p;
		n->prev = p;
		p = n;
	}
	return p;
}

node* create_lst(){
	int data;
	cin>>data;
	node* p = NULL;
	while(data != -1){
		p = insert_node(p,data);
		cin>>data; 
	}
	return p;
}

int count_node(node* p){
	if(p == NULL){
		return 0;
	}else{
		return 1 + count_node(p->next);
	}
}

node* delete_node(node* p, int pos){
	node* ptr = p;
	node* preptr = NULL;
	if(pos == 0){
		node* temp = p;
		p = p->next;
		p->prev = NULL;
		delete temp;
	}else if(pos == count_node(p)){
		while(ptr->next != NULL){
			preptr = ptr;
			ptr = ptr->next;
		}
		preptr->next = NULL;
		delete(ptr);
	}
	else{
		while(pos){
			preptr = ptr;
			ptr = ptr->next;
			pos--;
		}
		preptr->next = ptr->next;
		ptr->next->prev = preptr;
		node* temp = ptr;
		delete temp;
	}
	return p;
}

node* reverse_node(node* p){
	node* temp;
	node* first;
	while(p != NULL){
		temp = p->next;
		p->next = p->prev;
		p->prev = temp;
		p = p->prev;
		if(p->next == NULL && p != NULL){
			first = p;
			break;
		}
	}
	return first;
}

void display(node* p){
	while(p != NULL){
		cout<<p->data <<"  ";
		p = p->next;
	}
}

int main(){
	node* k = create_lst();
	display(k);
	cout<<endl;
//	k = delete_node(k,4);
	k = reverse_node(k);
	display(k);
	return 0;
}

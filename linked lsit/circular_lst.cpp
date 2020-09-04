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

node* insert_node(node* p, int data){
	node* last = p;
	node* n = new node(data);
	if(p == NULL){
		p = n;
		p->next=p;
	}else{
		while(last->next != p){
			last = last->next;
		}
		last->next = n;
		last = n;
		last->next = p;
	}
}

node* insert_node_btwn(node* p, int pos, int data){
	if(p == NULL){
		return NULL;
	}
	node* n = new node(data);
	node* ptr = p;
	node* preptr = NULL;
	while(pos && ptr->next != p){
		preptr = ptr;
		ptr = ptr->next;
		pos--;
	}
	preptr->next = n;
	n->next = ptr;
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

node* delete_node(node* p, int data){
	node* ptr = p;
	node* preptr = NULL;
	if(data == p->data){
		while(ptr->next != p){
			ptr = ptr->next;
		}
		node* temp = p;
		p = p->next;
		ptr->next = p;
		delete temp;
	}
	else{	
		while(ptr->next != p){
			if(ptr->data != data){
				preptr = ptr;
				ptr = ptr->next;
			}else{
				break;
			}
		}
		node* k = ptr;
		preptr->next = ptr->next;
		delete k;
	}
	return p;
}

void display(node* p){
	node* m = p;
	while(p->next != m){
		cout<<p->data<<"  ";
		p = p->next;
	}
	cout<<p->data;
}

int main(){
	
	node* k = NULL;
	k = create_lst();
	display(k);
	cout<<endl;
//	k = insert_node_btwn(k, 5, 6);
//	display(k);
	k = delete_node(k, 1);
	display(k);
	return 0;
}

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
	node* n = new node(data);
	
	if(p == NULL){
		p = n;
	}else{
		n->next = p;
		p = n;
	}
	return p;
}

node* insert_node_end(node* p, int data){
	node* n = new node(data);
	node* last = p;
	if(p == NULL){
		p = last = n;
	}else{
		while(last->next != NULL){
			last = last->next;
		}
		last->next = n;
	}
	return p;
}

node* insertion_between(node* p, int data, int index){
	node* ptr = NULL;
	node* m = p;
	while(index){
		ptr = m;
		m = m->next;
		index--;
	}
	node* n = new node(data);
	ptr->next = n;
	n->next = m;
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

node* Reversing_lst(node* ptr){
	node* r = NULL;
	node* q = NULL;
	node* p = ptr;
	
	while(p != NULL){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	return q;
}

node* concate_lst(node* p1, node* p2){
	node* ptr = p1; 
	while(ptr->next != NULL){
		ptr = ptr->next;  
	}
	ptr->next = p2;
	return p1;
} 

node* merge_lst(node* p1, node* p2){
	node* p3 = NULL;
	node* last = NULL;
	if(p1->data < p2->data){
		p3 = p1;
		p1 = p1->next;
	}else{
		p3 = p2;
		p2 = p2->next;
	}
	last = p3;
	last->next = NULL;
	while( p1 != NULL && p2 != NULL){
		if(p1->data < p2->data){
			last->next = p1;
			last = p1;
			p1 = p1->next;
			last->next = NULL;
		}else{
			last->next = p2;
			last = p2;
			p2 = p2->next;
			last->next = NULL;
		}
	}
	while(p1 != NULL){
		last->next = p1;
		last = p1;
		p1 = p1->next;
	}
	while(p2 != NULL){
		last->next = p2;
		last = p2;
		p2 = p2->next;
	}
	return p3;
}

node* delete_node(node* p, int data){
	node* preptr = NULL;
	node* ptr = p;
	while(ptr->data != data){
		preptr = ptr;
		ptr = ptr->next;
	}
	node* n = ptr;
	preptr->next = ptr->next;
	delete ptr;
	return p;
}

int count_nodes(node* p){
	int n = 0;
	while(p != NULL){
		n++;
		p = p->next;
	}
	return n;
}

int count_nodesR(node* p){
	if(p != NULL){
		return count_nodesR(p->next) + 1;
	}else{
		return 0;
	}
}

int middle_node(node* p){
	int max = count_nodes(p);
	max = max/2;
	while(max){
		p = p->next;
		max--;
	}
	return p->data;
}

int sum_nodes(node* p){
	int sum = 0;
	while(p != NULL){
		sum += p->data;
		p = p->next;
	}
	return sum;
}

int sum_nodesR(node* p){
	if(p != NULL){
		return sum_nodesR(p->next) + p->data;
	}else{
		return 0; 
	}
}

int max_node(node* p){
	int max = 0;
	while(p != NULL){
		if(max < p->data){
			max = p->data;
		}
		p = p->next;
	}
	return max;
}

int max_nodeR(node* p){
	static int x = 0;
	if(p == NULL){
		return x;
	}
	
	if(p->data > x){
		x = p->data;
	}
	return max_nodeR(p->next);
	
}

bool search_lst(node* p, int data){
	while(p != NULL){
		if(p->data == data){
			return true;
		}
		p = p->next;
	}
	return false;
}

bool search_lstR(node* p, int data){
	if(p != NULL){
		if(p->data == data){
			return true;
		}
		search_lstR(p->next,data);
	}
	return false;
}

bool isSorted(node* p){
	int x = p->data;
	p = p->next;
	while(p != NULL){
		if(x > p->data){
			return false;
		}
		p = p->next;
	}
	return true;
}

node* Removing_Adj_duplicates(node* p){
	node* ptr = p->next;
	node* preptr = p;
	
	while(ptr != NULL){
		if(ptr->data != preptr->data){
			preptr = ptr;
			ptr = ptr->next;
		}else{
			preptr->next = ptr->next;
			delete ptr;
			ptr = preptr->next; 
		}
	} 
	
	return p;
}

// For Displaying the Linked Lists
void display(node* p){
	while(p != NULL){
		cout<<p->data<<"   ";
		p = p->next;
	}
}

void displayR(node* p){
	if( p != NULL){
		cout<<p->data<<"  ";
		displayR(p->next);
	}
}

void display_Reverse(node* p){
	if(p != NULL){
		display(p->next);
		cout<<p->data<<" ";
	}
}



int main(){
	
	node* k1 = NULL;
	k1 = create_lst();
	display(k1);
	cout<<endl;
//	display_Reverse(k);
//	int n = count_nodes(k);
//	cout<<n;
//	cout<<count_nodesR(k);
//	cout<<sum_nodes(k)<<endl<<sum_nodesR(k);
//	cout<<max_node(k)<<endl<<max_nodeR(k);
//	if(search_lstR(k,6)){
//		cout<<"found";
//	}else{
//		cout<<"Not found!!";
//	}
//	k = insertion_between(k, 6, 2);
//	display(k);
//	k = delete_node(k,5);
//	display(k);
//	if(isSorted(k)){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//	k = Removing_Adj_duplicates(k);
//	display(k);
//	k = Reversing_lst(k);
//	display(k);
	
	node* k2 = create_lst();
	display(k2);
	cout<<endl;
//	node* k3 = concate_lst(k1, k2);
//	display(k3);
	node* k3 = merge_lst(k1, k2);
	display(k3);
	return 0;
}

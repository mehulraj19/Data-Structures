#include<iostream>
using namespace std;

class node{
	public:
		int data;
		int col;
		node* next;
		node(int data, int col){
			this->data = data;
			this->col = col;
			next = NULL;
		}
};

node* last = NULL;

void create(node* Ar[], int n){
	int data, col,num;
	for(int i=0; i<n; i++){
		cout<<"Enter number of values for "<<i<<"th row:"<<endl;
		cin>>num;
		while(num--){
			cin>>col>>data;
			node* k = Ar[i];
			k->data = data;
			k->col = col;
			k->next = NULL;
			if(k == NULL){
				Ar[i]->next = k;
				last = k;
			}else{
				last->next = k;
				last = k;
			}
		}
	}
	
}

void display(node* Ar[], int n){
	for(int i=0; i<n ; i++){
		node* p = Ar[i];
		for(int j=0; j<n; j++){
			if(j == p->col){
				cout<<p->data<<"  ";
				p = p->next;
			}else{
				cout<<"0  ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	node* Ar[n];
	create(Ar, n);
	display(Ar, n);
	return 0;
}

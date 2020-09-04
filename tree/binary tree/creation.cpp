#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		node(int data){
			this->data = data;
			left = NULL;
			right = NULL;
		}
};

node* create(){
	queue <node*> q;
	int data;
	cin>>data;
	node* root = new node(data);
	q.push(root);
	while(!q.empty()){
		node* p = q.front();
		q.pop();
		cout<<"Enter left child: ";
		cin>>data;
		cout<<endl;
		if(data != -1){
			node* temp = new node(data);
			root->left = temp;
			q.push(root->left);
		}
		cout<<"Enter right child: ";
		cin>>data;
		cout<<endl;
		if(data != -1){
			node* temp = new node(data);
			root->right = temp;
			q.push(root->right);
		}
	}
	return root;
}

void preorder(node* start){
	if(start != NULL){
		cout<<start->data<<"  ";
		preorder(start->left);
		preorder(start->right);
	}
}
void postorder(node* start){
	if(start != NULL){
		postorder(start->left);
		postorder(start->right);
		cout<<start->data<<"  ";
	}
}

void inorder(node* start){
	if(start != NULL){
		inorder(start->left);
		cout<<start->data<<"  ";
		inorder(start->right);
	}
}

void levelorder(node* start){
	queue<node*> q;
	cout<<start->data<<"  ";
	q.push(start);
	while(!q.empty()){
		node* t = q.front();
		q.pop();
		if(t->left){
			cout<<t->left->data<<"  ";
			q.push(t->left);
		}
		if(t->right){
			cout<<t->right->data<<"  ";
			q.push(t->right);
		}
	}
}
int main(){
	node* k = create();
	inorder(k);
	return 0;
}

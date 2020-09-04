#includes<iostream>
using namespace std;

class node{
	public:
		int data;
		node* left, right;
		node(int data){
			this->data = data;
			left = right = NULL;
		} 
};


node* insertNode(int data, node* tree){
	
	if(tree == NULL){
		node* n = new node(data);
		return n;
	}
	if(data < tree->data){
		tree->left = insertNode(data, tree->left);
	}else{
		tree->right = insertNode(data, tree->right);
	}
	return tree;
}

node* createNode(){
	node* tree = NULL;
	int data;
	cin>>data;
	while(data != -1){
		insertNode(data, tree);
		cin>>data;
	}
	return tree;
}

node* findMax(node* tree){
	while(tree->right != NULL){
		tree = tree->right; 
	}
	return tree;
}

node* deleteNode(int data, node* tree){
	if(tree == NULL){
		return tree;
	}else if(tree->data > data){
		tree->right = deleteNode(data, tree->right);
	}else if(tree->data < data){
		tree->left = deleteNode(data, tree->left);
	}else{
		if(tree->left == NULL && tree->right == NULL){
			delete tree;
			node* tree = NULL;
			return tree;
			return tree;
		}else if(tree->left == NULL){
			node* temp = tree;
			tree = tree->right;
			delete temp;
			return tree;
		}else if(tree->right == NULL){
			node* temp = tree;
			tree = tree->left;
			delete temp;
			return tree;
		}else{
			node* temp = findMax(tree->left);
			tree->data = temp->data;
			tree->left = deleteNode(tree->data, tree->left);
		}
	}
}

bool BstSearch(int key, node* tree){
	if(tree == NULL){
		return tree;
	}
	if(key == tree->data){
		return true;
	}else if(key < tree->data){
		return BstSearch(key, tree->left);
	}else{
		return BstSearch(key, tree->right);
	}
	return false;
}

int main(){
	
	return 0;
}

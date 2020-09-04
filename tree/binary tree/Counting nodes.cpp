#include<iostream>
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
// Input code for creating binaryTree

int Count(node* tree){
	int x, y;
	if(tree!=NULL){
		x = Count(tree->left);
		y = Count(tree->right);
		return x+y+1;
	}
	return 0;
} 

int CountNodesDergee2(node* tree){
	int x, y;
	if(tree != NULL){
		x = CountNodesDergee2(tree->left);
		y = CountNodesDergee2(tree->right);
		if(tree->left && tree->right){
			return x+y+1;
		}else{
			return x+y;
		}
	}
	return 0;
}

int sumElements(node* tree){
	int x, y;
	if(tree != NULL){
		x = sumElements(tree->left);
		y = sumElements(tree->right);
		return x+y+tree->data;
	}	
	return 0;	
}

int SubtreeWithMaxNodes(node* tree){
	int x,y;
	if(tree != NULL){
		x = SubtreeWithMaxNodes(tree->left);
		y = SubtreeWithMaxNodes(right);
		if(x>y){
			return x+1;
		}else{
			return y+1;
		}
	}
	return 0;
}

int CountingLeafNodes(node* tree){
	int x, y;
	if(tree != NULL){
		int x = CountingLeafNodes(tree->left);
		int y = CountingLeafNodes(tree->right);
		if( tree->left == NULL && tree->right == NULL ){
			return x+y+1;
		}else{
			return x+y;
		}
	}
	return 0;
}

int InternalNodes(node* tree){
	int x, y;
	if(tree != NULL){
		int x = CountingLeafNodes(tree->left);
		int y = CountingLeafNodes(tree->right);
		if( tree->left != NULL && tree->right != NULL ){
			return x+y+1;
		}else{
			return x+y;
		}
	}
	return 0;	
}
int CountingNodesWithDegree1(node* tree){
	int x, y;
	if(tree != NULL){
		x = CountNodesDergee2(tree->left);
		y = CountNodesDergee2(tree->right);
		if((tree->left ^ tree->right) != NULL){
			return x+y+1;
		}else{
			return x+y;
		}
	}
	return 0;	
}

int main(){
	
	return 0;
}

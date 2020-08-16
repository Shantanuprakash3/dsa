#include<bits/stdc++.h>
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}

Node* lca(Node* root, int a, int b){
	if(root==NULL){
		return NULL;
	}
	if(root->data==a || root->data==b){
		return root;
	}
	Node* left_ = lca(root->left, a, b);
	Node* right_ = lca(root->right, a, b);
	if(left_ && right_){
		return root;
	}

	return (left_ == NULL ? right_ : left_); 
}

int main(){
	#populate tree
	#call lca
}

#include<bits/stdc++.h>
using namespace std;

struct treeNode{
	int val;
	treeNode* left;
	treeNode* right;
}

void postOrder(treeNode *root){
	if(root==NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->val << "\n";
}
void inOrder(treeNode *root){
	if(root==NULL) return;
	inOrder(root->left);
	cout << root->val << "\n";
	inOrder(root->right);
}
void preOrder (treeNode *root){
	if(root==NULL) return;
	cout << root->val << "\n";
	preOrder(root->left);
	preOrder(root->right);
}

int main(){
	# populate tree
	# call traversal methods
	return 0;
}

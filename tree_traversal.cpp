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

void levelOrder(treeNode *root){
	if(root==NULL){
		return;
	}
	int height = treeHeight(treeNode* root);
	
	for(int i=1;i<=height;i++){
		printLevel(root, i);
	}
}

void printLevel(treeNode *root, int level){
	if(root==NULL){
		return;
	}
	if (level == 1){
		cout << root->data << " ";
	} else if(level > 1){
		printLevel(root->left, level-1);
		printLevel(root->right, level-1);
	}	
}

int treeHeight(treeNode *root){
	if(root=NULL){
		return 0;
	}
	int lheight = treeHeight(root->left);
	int rheight = treeHeight(root->right);

	return 1 + max(lheight, rheight);
}
int main(){
	# populate tree
	# call traversal methods
	return 0;
}

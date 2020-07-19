#include<bits/stdc++.h>
using namespace std;

struct treeNode{
	int val;
	treeNode* left;
	treeNode* right;
}

bool isValidtBSTUtil(treeNode* A, int min, int max){
	if(A==NULL){
		return true;
	}
	if(A->val < min || A->val > max){
		return false;
	}
	return isValidBSTUtil(A->left, min, A->val-1) && isValidBSTUtil(A->right, max, A->val+1);
}

bool isValidBST(treeNode* A){
	if(A==NULL){
		return true;
	}
	return isValidBSTUtil(A, INT_MIN, INT_MAX);
}

int main(){
	# populate tree
	# call isValidBST
	return 0;
}

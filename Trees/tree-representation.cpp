#include<iostream>

using namespace std;

struct TreeNode {
	
	int data;
	TreeNode* left;
	TreeNode* right;

	//Initialization
	TreeNode(int val): data(val), left(nullptr), right(nullptr) {}
};

int main(){
	
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	
	cout<<root->right->data<<endl;
	return 0;
}

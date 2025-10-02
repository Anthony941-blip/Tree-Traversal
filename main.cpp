#include <iostream>
#include <queue>
using namespace std;

struct BinaryTreeNode {
	string data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(const string& value) {
		data = value;
		left = nullptr;
		right = nullptr;
	}
};

void postorder(BinaryTreeNode* root);
void levelOrder(BinaryTreeNode* root);
void freeTree(BinaryTreeNode* root);

int main() {

	BinaryTreeNode* root = new BinaryTreeNode("A");
	root->left = new BinaryTreeNode("B");
	root->right = new BinaryTreeNode("C");
	root->left->left = new BinaryTreeNode("D");
	root->left->right = new BinaryTreeNode("E");
	root->right->left = new BinaryTreeNode("F");


	return 0;
}

void postorder(BinaryTreeNode* root) { 
        if(root == nullptr) { 
                return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
}

void levelOrder(BinaryTreeNode* root) {
	if(root == nullptr) {
		return;
	}
	queue<BinaryTreeNode*> q;
	q.push(root);
	while(q!empty()) {
		BinaryTreeNode* current = q.front();
		q.pop();
		cout << current->data <<  " ";
		if(current->data) {
		q.push(current->left);
	}
		if(current->right) {
		q.push(current->right);
	}
	}
}

void freeTree(BinaryTreeNode* root) {
	if(!root) {
		return;
	}
	freeTree(root->left);
	freeTree(roovoid freeTree(BinaryTreeNode* root) t->right);
	delete root;
}

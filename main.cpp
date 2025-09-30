#include <iostream>
using namespace std;

struct BinaryTreeNode {
	string data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(cinst string& value) {
		data = value;
		left = nullptr;
		right = nullptr;
	}
};

void preOrder(BinaryTreeNode* root);

int main() {

	return 0;
}


void preOrder(BinaryTreeNode* root) { 

        if(root == nullptr) { 
                return;
        }

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
}

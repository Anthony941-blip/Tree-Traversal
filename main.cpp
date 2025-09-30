#include <iostream>
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

int main() {

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


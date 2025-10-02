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

void inorder(BinaryTreeNode* root) { 

void preOrder(BinaryTreeNode* root);

int main() {

	cout << "In-order: ";
	inorder(root);
	cout << "\n";

        cout << "Pre-order: ";
        preOrder(root);
        cout << "\n";

        cout << "Post-order: ";
        postorder(root);
        cout << "\n";

        cout << "Level-order: ";
        levelorder(root);
        cout << "\n";

	freeTree(root);


	return 0;
}


void preOrder(BinaryTreeNode* root) { 

        if(root == nullptr) { 
                return;
        }


        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);

}

void postorder(BinaryTreeNode* root) { 
        if(root == nullptr) { 
                return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
}



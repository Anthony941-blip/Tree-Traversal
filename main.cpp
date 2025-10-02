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

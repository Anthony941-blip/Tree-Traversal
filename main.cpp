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

int main() {

	cout << "In-order: ";
	inorder(root);
	cout << "\n";

	return 0;
}

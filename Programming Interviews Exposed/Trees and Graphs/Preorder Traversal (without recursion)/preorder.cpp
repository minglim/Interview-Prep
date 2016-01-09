#include <iostream>
#include <stack>

using namespace std;

void preorder (Node* root)
{
	// empty tree
	if (root == 0)
		return;

	stack<Node*> myStack;
	myStack.push(root);

	while (!myStack.empty())
	{
		Node* cur = myStack.top();
		myStack.pop();

		cout << cur->value << endl;
		if (cur->right != 0)
			myStack.push(cur->right);
		if (cur->left != 0)
			myStack.push(cur->left);
	}
}

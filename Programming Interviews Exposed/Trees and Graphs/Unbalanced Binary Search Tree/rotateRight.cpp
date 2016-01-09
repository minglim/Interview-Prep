Node* rotateRight(Node* root)
{
	// this will be the new root
	Node* newRoot = root->left;

	// assign newRoot's right child to oldRoot's left child
	root->left = newRoot->right

	// assign oldRoot to newRoot's right child
	newRoot->right = root;

	return newRoot;
}

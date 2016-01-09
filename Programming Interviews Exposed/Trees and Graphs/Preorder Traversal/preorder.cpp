void preorder(Node* root)
{
	if (root == 0)
		return;

	cout << root->value << endl;
	preorder(root->left);
	preorder(root->right);
}

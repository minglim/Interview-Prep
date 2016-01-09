int treeHeight (Node* root)
{
	// base case
	if (root == 0)
		return 0;
	
	// find tallest subtree and add 1 to account for current node
	return 1 + max(treeHeight(root->left), treeHeight(root->right));
}

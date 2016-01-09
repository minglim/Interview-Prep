Node* LCA (Node* root, int value1, int value2)
{
	while (root != 0)
	{
		// root is greater than both values so go left
		if (root->value > value1 && root->value < value2)
			root = root->left;
		// root is less than both values so go right
		else if (root->value < value1 && root->value < value2)
			root = root->right;
		// root is between the 2 values which is the LCA
		else
			return root;
	}

	return 0;
}

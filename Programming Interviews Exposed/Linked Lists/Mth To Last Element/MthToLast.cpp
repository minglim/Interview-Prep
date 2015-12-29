struct Node
{
	int value;
	Node* next;
};

// return mth-to-last element of a linked list
// given head of linked list
int mthToLast(Node* head, int m)
{
	Node* lead = head;
	Node* trail = head;
	// traverse a pointer m elements ahead of another pointer
	int count = 0;
	while (count < m)
	{
		if (lead == 0)
		{
			// m is greater than amount of elements in list
			// return error
			return -1;
		}
		lead = lead->next;
		count++;
	}

	// lead is now m elements ahead of trail
	// simultaneously traverse both pointers until lead points to last element
	// trail will point to mth to last element
	while (lead->next != 0)
	{
		lead = lead->next;
		trail = trail->next;
	}

	return trail->value;
}

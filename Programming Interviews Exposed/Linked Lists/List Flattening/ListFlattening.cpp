struct Node {
	Node *next;
	Node *prev;
	Node *child;
	int value;
}

void flattenList(Node* head, Node* tail)
{
	// empty list
	if (head == 0)
		return;
	Node* node = head;
	// traverse list until final element is reached
	while (node != 0)
	{
		// if node has child, attach tail element to child list and update tail
		if (node->child != 0)
		{
			tail->next = node->child;
			node->child->prev = tail;
			Node* temp = node->child;
			while (temp->next != 0)
				temp = temp->next;
			tail = temp;
		}

		node = node->next;
	}
}
	

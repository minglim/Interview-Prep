void unflattenList(Node* head, Node* tail)
{
	if (head == 0)
		return;
	Node* node = tail;
	while (node != 0)
	{
		if (node->child != 0)
		{
			tail = node->child->prev;
			node->child->prev->next = 0;
			node->child->prev = 0;
		}
		node = node->prev;
	}
}

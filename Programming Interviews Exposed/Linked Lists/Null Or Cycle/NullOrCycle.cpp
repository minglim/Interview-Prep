bool boolOrNull (Node* head)
{
	if (head == 0)
		return false;

	Node* slow = head;
	Node* fast = head->next;

	while (true)
	{
		// reached null (acyclic)
		if (fast == 0 || fast->next == 0)
			return false;
		// fast pointer is behind or caught up with slow pointer (cyclic)
		else if (fast == slow || fast->next == slow)
			return true;
		// continue traversing list
		else
		{
			slow = slow->next;
			fast = fast->next->next;
		}
	}
}


#include "ListWithTail.h"

#include <iostream>

using namespace std;

ListWithTail::ListWithTail()
{
	head = 0;
	tail = 0;
}

bool ListWithTail::remove(Node* node)
{
	// empty list
	if (head == 0)
	{
		cout << "Empty list!" << endl;
		return false;
	}
	
	// node to delete is only node in list
	if (head == node && tail == node)
	{
		head = 0;
		tail = 0;
		cout << "Deleting " << node->value << endl;
		delete node;
		return true;
	}

	// node to delete is head
	if (head == node)
	{
		head = node->next;
		cout << "Deleting " << node->value << endl;
		delete node;
		return true;
	}

	// find node directly before node to be deleted
	Node* toDelete = head;
	while (toDelete != 0 && toDelete->next != node)
		toDelete = toDelete->next;

	// can't find node
	if (toDelete == 0)
	{
		cout << "Node doesn't exist!" << endl;
		return false;
	}

	// found node, proceed to delete
	// if node is tail, update tail pointer
	if (toDelete->next == tail)
		tail = toDelete;

	toDelete->next = node->next;
	cout << "Deleting " << node->value << endl;
	delete node;
	return true;
}

bool ListWithTail::insertAfter(Node* node, int data)
{
	Node* insert = new Node;
	insert->value = data;

	// insert at beginning
	if (node == 0)
	{
		insert->next = head;
		head = insert;
		if (tail == 0)
			tail = insert;
		cout << "Inserted " << insert->value << endl;
		return true;
	}

	// insert after tail
	if (tail = node)
	{
		tail->next = insert;
		insert->next = 0;
		tail = insert;
		cout << "Inserted " << insert->value << endl;
		return true;	
	}

	insert->next = node->next;
	node->next = insert;
	cout << "Inserted " << insert->value << endl;
	return true;
}

#include "StackLinkedList.h"
#include <iostream>
#include <string>

using namespace std;

StackLinkedList::StackLinkedList()
{
	head = 0;
}

bool StackLinkedList::push(string value)
{
	return addToFront(value);
}

bool StackLinkedList::pop()
{
	return removeFromFront();
}

bool StackLinkedList::addToFront(string value)
{
	// empty list
	if (head == 0)
	{
cout << "Empty list!" << endl;
		Node* newNode = new Node;
		newNode->value = value;
		newNode->next = 0;
		head = newNode;
		cout << "Added " << head->value << endl;
		return true;
	}
	// list not empty
	else
	{
		Node* newNode = new Node;
		newNode->value = value;
		newNode->next = head;
		head = newNode;
		cout << "Added " << head->value << endl;
		return true;
	}
}

bool StackLinkedList::removeFromFront()
{
	// empty list
	if (head == 0)
	{
		cout << "Nothing to remove!" << endl;
		return false;
	}
	// list not empty
	else
	{
		Node* temp = head;
		head = head->next;
		cout << "Popping " << temp->value << endl;
		delete temp;
		return true;
	}
}

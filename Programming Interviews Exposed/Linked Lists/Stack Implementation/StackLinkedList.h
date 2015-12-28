#include <string>

class StackLinkedList 
{
public:
	struct Node {
		std::string value;
		Node* next;
	};
	StackLinkedList();
	bool push(std::string value);
	bool pop();
private:
	bool addToFront(std::string value);
	bool removeFromFront();
	Node* head;
	
};

class ListWithTail 
{
public:
	struct Node {
		int value;
		Node* next;
	};
	ListWithTail();
	bool remove(Node* node);
	bool insertAfter(Node* node, int data);
private:
	Node* head;
	Node* tail;
	
};

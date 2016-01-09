#include <queue>
#include <algorithm>

using namespace std;

bool sortFunction(Node* first, Node* second)
{
	return first->value<second->value;
}

Node* heapify(Node* root)
{
	// perform a level order traversal of the tree to count the number of nodes
	queue<Node*> myQueue;
	int count = 0;
	myQueue.push_back(root);
	count++;
	while (!myQueue.empty())
	{
		Node* cur = myQueue.front();
		myQueue.pop_front();
		if (cur->left != 0)
		{
			myQueue.push_back(cur->left);
			count++;
		}
		if (cur->right != 0)
		{
			myQueue.push_back(cur->right);
			count++;
		}
	}

	// traverse one more time to insert items into array
	Node* array[count];
	int index = 0;
	myQueue.push_back(root);
	while (!myQueue.empty())
	{
		Node* cur = myQueue.front();
		array[index] = cur;
		index++;
		myQueue.pop_front();
		if (cur->left != 0)
		{
			myQueue.push_back(cur->left);
		}
		if (cur->right != 0)
		{
			myQueue.push_back(cur->right);
		}
	}

	// sort array in ascending order
	sort(array.begin(), array.end(), sortFunction);

	// reconstruct binary tree into valid heap
	for (int i=0; i<count; i++)
	{
		int left = 2*i+1;
		int right = 2*i+2;
		// valid child exists
		if (left<count)
			array[i]->left = array[left];
		else
			array[i]->left = 0;
		if (right<count)
			array[i]->right = array[right];
		else
			array[i]->right = 0;
	}
	return array[0];
}

#include "StackLinkedList.h"

int main()
{
	StackLinkedList test;
	test.push("hello");
	test.push("world");
	test.push("!");
	test.pop();
	test.pop();
	test.pop();
	test.pop();
}

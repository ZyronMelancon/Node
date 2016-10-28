#include<iostream>

struct nodeType
{
	int info;
	nodeType * link;
};

template<Type>
class LinkedList
{
private:
	int count;
	nodeType *first;
	nodeType *last;
public:
	bool Add();
	LinkedList() {};
	const Type front();
	const int length();
	void print();
};

void main()
{
	nodeType *head;
	nodeType a, b, c;
	c.info = 4;
	b.info = 2;
	a.info = 0;

	head = &a;
}
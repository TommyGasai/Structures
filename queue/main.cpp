#include<iostream>

using namespace std;

class queue
{
	struct element
	{
		int number;
		element *next;
	};
	
	element *first, *last;
	
public:
	queue();
	queue(const queue&);
	~queue();
	int first_elem();
	void del_first();
	void add_to_end(int x);
	bool test();
};

queue::queue()
{
	first = last = NULL;	
}

queue::queue(const queue &q)
{
	if(q.first == q.last)
		first = last = NULL;
	else 
	{
		element *temp;
		temp = q.first;
		first = new element;
		first->number = temp->number;
		last = first;
		while(temp != q.last)
		{
			temp = temp->next;
			last->next = new element;
			last = last->next;
			last->number = temp->number;
		}
		
	}
	
}

queue::~queue()
{
	if(first != NULL)
	{
		element *temp;
		while(first != last)
		{
			temp = first;
			first = first->next;
			delete temp;
		}
		delete first;
	}
}

int queue::first_elem()
{
	return first->number;
}

void queue::del_first()
{
	element *temp = first;
	if(first = last)
		first = last = NULL;
	else 
		first = first->next;
	delete temp;
}

void queue::add_to_end(int num)
{
	if(last != NULL)
	{
		last->next = new element;
		last = last->next;
	}
	else 
		last = first = new element;
	last->number = num;
}

bool queue::test()
{
	return (first == NULL);
}
int main(int argc, char ** argv){

queue list;
	return 0;
}


#include<iostream>
using namespace std;

class stack{
	struct Node{
		int item;
		Node *next;
	};
	Node* first;
public:
	stack();
	stack(const stack&);
	bool isEmpty();
	void push(int item);
	int pop();
	~stack();

};
	stack::stack(){first = NULL;}
/*	stack::stack(const stack& q) to do
	{
		if()
*/	}
	stack::~stack()
	{
		if(first != NULL)
		{
			Node* temp;
			while(first != NULL)
			{
				temp = first;
				first = first->next;
				delete temp;
			}
			delete first;
		}
	}
	bool stack::isEmpty()
	{
		return 
		(first == NULL);
	}
	
	void stack::push(int item)
	{
		Node* old_first = first;
		first = new Node;
		first->item = item;
		first->next = old_first;
	}
	
	int stack::pop()
	{
		int item = first->item;
		first = first->next;
		return item;
	}
int main(){
stack q;
q.push(5);
q.push(3);
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
if(q.isEmpty()) cout<<"pusty"<<endl;
else cout<<"nie pusty"<<endl;
	
return 0;
}

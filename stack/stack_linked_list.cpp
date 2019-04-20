#include<iostream>
using namespace std;

class stack{
	struct Node{
		int item;
		Node *next;
	};
	Node* first = NULL;
public:
	bool isEmpty(){
		return (first == NULL);
	}
	
	void push(int item)
	{
		Node* old_first = first;
		first = new Node;
		first->item = item;
		first->next = old_first;
	}
	
	int pop()
	{
		int item = first->item;
		first = first->next;
		return item;
	}
};

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

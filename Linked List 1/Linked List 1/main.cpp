#include <iostream>
using namespace std;
/*Personal project. Understanding Linked Lists

This is the first time that I have made a Linked List 
on my own. I have also created a few functions to manipulate
the data within it. In the future I would like to add a couple
of more functions to interact with the list in order to help facilitate
my understanding of the data structure as well as pointers in general. 

Ashley M.  2012*/



struct node 	
{	
	int data;
	node *next;	
};

class Linked_List
{
private: 
	node* head;
public:
	Linked_List() {head = nullptr;}
	void insertFront();
	void deleteFront();
	void printList();
	~Linked_List(){delete head;}

};


void Linked_List::insertFront(void)
{
	int item;
	node *temp = new node;
	cout << "What would you like to add to the list?>";
	cin >> item;
	cout <<item <<" has been added to the list\n";
	temp->data = item;
	temp->next = head;
	head = temp;
}

void Linked_List::deleteFront()
{
	node *temp;
	int item;
	if(head == nullptr)
	{
		cout <<"Empty List!\n";		
	}
	temp = head;
	item = temp->data;
	cout <<"Deleting " <<temp->data << endl;
	head = temp->next;
	delete temp;
		
}

void Linked_List::printList()
{
	node *temp;
	temp = head;
	cout<<"List Contents: ";
	while(temp !=nullptr)
	{
		cout <<temp->data<<"->";
		temp = temp->next;
	}
	cout <<"End\n";
	
}


int main()
{	
	Linked_List myList;
	int choice;
	bool menu = true;

	while(menu)
	{
		cout << "\n\nwhat would you like to do?\n";
		
		cout <<"1 - Insert a node\n";
		cout <<"2 - Delete a node\n";
		cout <<"3 - Show List\n";
		cout <<"4 - Exit\n";
		cout <<"choice: ";

		
		cin >> choice;

		switch(choice)
		{
		case 1: myList.insertFront();
			break;
		case 2: myList.deleteFront();
			break;
		case 3: myList.printList();
			break;
		case 4 :
			menu = false;
			break;
		default: cout << "Not a valid choice\n";
		}
			

	}
	return 0;
}



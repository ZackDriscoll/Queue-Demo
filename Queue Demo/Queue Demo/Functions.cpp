#include "Functions.h"

using namespace std;

node* front = NULL;
node* rear = NULL;
node* temp;

//Insert Function
void Insert()
{
	int val;
	cout << "Please enter an integer to insert in queue: " << endl;
	cin >> val;

	if (rear == NULL)
	{
		rear = new node;
		rear->next = NULL;
		rear->data = val;
		front = rear;
	}
	else
	{
		temp = new node;
		rear->next = temp;
		temp->data = val;
		temp->next = NULL;
		rear = temp;
	}
}

//Delete Function
void Delete()
{
	temp = front;

	if (front == NULL)
	{
		cout << "Queue Underflow detected." << endl;
		return;
	}
	else if (temp->next != NULL)
	{
		temp = temp->next;
		cout << "Removed element " << front->data << " from the queue." << endl;
		delete front;
		front = temp;
	}
	else
	{
		cout << "Removed element " << front->data << " from the queue." << endl;
		delete front;
		front = NULL;
		rear = NULL;
	}
}

//Display Function
void Display()
{
	temp = front;
	isEmpty();

	cout << "The elements in the queue are: ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	cout << endl;
}

//Function to check if the queue is empty
void isEmpty()
{
	if ((front == NULL) && (rear == NULL))
	{
		cout << "This queue is empty." << endl;
		return;
	}
}
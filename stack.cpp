#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

// stack class
class Stack
{
private:
    node *top; //pointer to the top node of rhe stack

public:
    Stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }

    int push(int value)
    {
        node *newnode = new node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "Push Value: " << value << endl;
        return value;
    }

    void pop()
    {
        node*temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Popped value: " << temp->data << endl;
        top = temp->next;
        delete temp;
    }

    void peek()
    {
        
    }
}
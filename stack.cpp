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
}
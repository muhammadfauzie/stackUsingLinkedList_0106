#include <iostream>
using namespace std;    

//Node class representing a single node in the linked list
class Node 
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack 
{
    private:
        Node* top; // Pointer to the top node of the stack
    public:
        Stack() 
        {
            top = NULL; // Initialize the stack with a null top pointer
        }

        //push operation: insert an element at the top of the stack
        int push(int value) 
        {
            Node* newNode = new Node(); // 1. Allocate memory for a new node
            newNode->data = value;      // 2. Assign value
            newNode->next = top;        // 3. set the next pointer of the new node to the current 
            top = newNode;              // 4. Update the top pointer to point to the new node
            cout << "push value: " << value << endl; 
            return value;
        }

        //isEmpty operation: check if the stack is empty
        bool isEmpty() 
        {
            return top == NULL; // Return true if the top pointer is null, indicating the stack is empty
        }

        //pop operation: remove and return the top element of the stack
        void pop() 
        {
            Node* current = top; // Create a temporary pointer to the current top node
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
                return; // If the stack is empty, print a message and return
            }
            cout << "pop value: " << current->data << endl; 
            top = temp->next; // Update the top pointer to the next node
            temp = nullptr; //free the memory of the popped node
          
        }

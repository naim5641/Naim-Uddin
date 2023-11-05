#include<bits/stdc++.h>
using namespace std;

// A doubly link list Node

struct node
{
    int data;
    struct node* prev;
    struct node* next;


};

// Append node at the front of the list

void append_data(node**head, int New_data)
{
    // Create a new node and allocate a memory
    struct node* newNode = new node;
    // Assign data to new node
    newNode->data = New_data;
    // A new node has been added with the name head
    // and the previous node set to null since it is
    // added at the front.

    newNode->next = (*head);
    newNode->prev = NULL;

    // Previous head is new node

    if ( (*head) != NULL)
    {

        (*head)-> prev = newNode;

    }
    // head point to new node
    (*head) = newNode;
}

void insert_Node_at_end(node** head, int newData)
{
    node * new_node = new node();
    node * last_node = *head;
    new_node->data = newData;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }

    while ( last_node->next != NULL)
    {

        last_node = last_node->next;
        last_node->next = new_node;
        new_node->prev = last_node;
        return;
    }
}
// Following Function display contents of the doubly
// linked list

void displayDlist(node * head)
{
    node *last_node;
    cout << "\nTraversal in Forward direction: ";
    while (head != NULL)
    {
        cout << " " << head->data << " ";
        last_node = head;
        head = head->next;
    }
    cout << "\nTraversal in Reverse direction: ";
    while ( last_node != NULL )
    {
        cout << " " << last_node->data << " ";
        last_node = last_node->prev;
    }

}
// Main Program

int main()
{
    // Start with the empty list

    struct node * head = NULL;
    append_data(&head, 7);
    append_data(&head, 8);
    append_data(&head, 9);
    append_data(&head, 12);

    cout << "Doubly linked list is as follows\n";


    displayDlist(head);

    cout << "\n\nInsert a new node at the end of a Doubly linked list:";
    insert_Node_at_end(&head, 500);

    displayDlist(head);

    return 0;
}

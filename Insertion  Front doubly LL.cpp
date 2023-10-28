#include<bits/stdc++.h>
using namespace std;

// Doubly Linked list Node


struct node
{
    int data;
    node *next;
    node *prev;
};

// Print the doubly linked list...

void printlist(node *n)
{
    while (n!=NULL)

    {
        cout << n->data<< " ";
        n = n->next;
    }
    
}

// Insert node in front of doubly linked list..

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if ( *head_ref != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    (*head_ref ) = new_node;
    

}

int main()
{

    node *head = NULL;
    push(&head,9);
    push(&head,10);
    push(&head,11);
    push(&head,12);

    printlist(head);

    return 0;
}
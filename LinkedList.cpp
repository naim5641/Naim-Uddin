#include <bits/stdc++.h>
using namespace std;

// Insert Node at Front of linked list..

struct node{
    int data;
    node *next;
};
// Fucntion for Insert in Front
void InsertNodeFront(node **head, int Ndata){
    node *new_node = new node();
    //assing data
    new_node ->data = Ndata;
    new_node -> next = *head;
    *head = new_node;

    cout << "Insert Item: " << new_node->data << endl;

}

// Function For add Node at Middle
void InsertAfter(node *prev_node, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode-> next = prev_node->next;
    prev_node->next = newNode;
}
//Function for add node at End

void append(node **head, int newData)
{
    node *newNode = new node();
    newNode ->data = newData;
    newNode ->next = NULL;

    node *strat = *head;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    else {
        while ( strat->next != NULL){
            strat = strat->next;

        }
    }
    strat->next = newNode;
    return;


}

void PrintList(node *n){
    cout << "Linked List : " ;
    while (n!=NULL)
    {
        cout << n->data << " "; n = n->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    InsertNodeFront(&head,4);
    InsertNodeFront(&head,5);
    
    InsertNodeFront(&head,6);
    InsertNodeFront(&head,7);
    InsertAfter(head->next, 50);
    InsertNodeFront(&head,8);
    append(&head,60);

   


    PrintList(head);

    return 0;
}
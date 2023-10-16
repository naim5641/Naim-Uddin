#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data<<" ";
        
        n = n->next;
        
    }
    cout << endl;
    
}

void push(Node **Start , int Newdata)
{
    Node *newNode = new Node();
    newNode -> data = Newdata;
    newNode -> next = *Start;
    *Start = newNode;
}

Node* Delete(struct Node* Start)
{
    if ( Start == NULL)
        return NULL;

    Node* ptr = Start;
    Start = Start -> next;
    
    free(ptr);

    return Start;


}


int main()
{
    Node *Start = NULL;
    push(&Start, 5);
    push(&Start, 7);
    push(&Start, -4);
    push(&Start, 9);

    printList(Start);

    Start = Delete(Start);
    printList(Start);



    return 0;
}
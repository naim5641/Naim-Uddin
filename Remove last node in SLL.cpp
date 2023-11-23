#include <bits/stdc++.h>
using namespace std;

// Create structure of node..
struct Node {
  int data;
  struct Node *next;
};

// creat a function to remove last node..
void removeLastNode(struct Node **head_ref) {
  // if head is null then list is empty..
  if (*head_ref == NULL){
    return;
    
  }
  // if head is not null then list is not empty..
  if ((*head_ref)->next == NULL){
    free(*head_ref);
    *head_ref = NULL;
    return;
  }
  // create a second last node..
  struct Node *last = *head_ref;
  // traverse to the second last node..
  while (last->next->next != NULL){
    last = last->next;
    
  }
  // free the last node..
  free(last->next);
  // Change the next of second last..
  last->next = NULL;
  return;
}

// create a function to push the linked list..
void push(struct Node **head_ref, int new_data) {
  // allocate memory to the node..
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  // put the data in the node..
  new_node->data = new_data;
  // put the head in the next of the node..
  new_node->next = (*head_ref);
  // move the head to point to the new node..
  (*head_ref) = new_node;
}


int main()
{
  Node* head = NULL;
  // call the push function..
  push(&head, 7);
  push(&head, 1);
  push(&head, 3);
  push(&head, 2);
  push(&head, 8);
  // call the removeLastNode function..
  removeLastNode(&head);
  // print the linked list..
  cout << "Linked list after deletion of last node: ";
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
  // again call the removeLastNode function..
  removeLastNode(&head);
  return 0;
}
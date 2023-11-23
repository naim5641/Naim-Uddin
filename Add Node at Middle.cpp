#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  node *next;
};

void push(node **head, int newdata) {
  node *newnode = new node();
  newnode->data = newdata;
  newnode->next = *head;
  *head = newnode;
}

void middle(node **head, int newdata) {
  node *newnode = new node();
  newnode->data = newdata;
  newnode->next = NULL;
  if (*head == NULL)
    *head = newnode;
  else {
    node *temp = *head;
    int cnt = 0;
    while (temp->next != NULL) {
      temp = temp->next;
      cnt++;
    }
    int count = (cnt % 2 == 0) ? cnt / 2 : (cnt + 1) / 2;
    temp = *head;
    while (count--) {
      temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
  }
}

// Append Node in the End

/* void Append_end(node **head, int newdata)
{
   node *newnode = new node();
   node *last = *head;
   newnode->data = newdata;
   newnode->next = NULL;
   if(*head == NULL)
   {
     *head = newnode;
     return;
   }
   while(last->next != NULL)
     {
       last = last->next;
     }
   last->next = newnode;
   return;



}
 */

void printList(node *n) {
  while (n != NULL) {
    cout << n->data << " ";
    n = n->next;
  }
  cout << endl;
}

int main() {
  node *head = NULL;

  // Append_end(&head, 70);
  push(&head, 5);
  push(&head, 6);
  push(&head, 7);
  push(&head, 8);
  push(&head, 20);
  // call the middle fuction..

  printList(head);
  middle(&head, 9);
  // call again print fucntion..
  printList(head);

  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int stk[100], n = 100, top = -1;

// Create a Push Function..

void push(int val)
{
    // Check Stack overflow
    if ( top >= n - 1 )
    {
        cout << "Stack is Overflow\n";
    }
    else
    {
        top++;
        stk[top] = val;
    }

}

// Create pop function..
void pop()
{
    // Check Stack Underflow..
    if ( top <= -1 )
    {
        cout << "Stack is underflow\n";

    }
    else
    {
        cout << "The popped element is : " << stk[top]<<endl;
        top--;
    }
}

// Create top function..

void peek()
{
    // Check Stack is empty..
    if ( top <= -1 )
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "The top element is : " << stk[top] << endl;
    }
}
// Create a empty Function..
bool Empty()
{
    if ( top <= -1 ) return true;
    else return false;
}

// Create Print function..

void Print()
{
    if ( top >= 0 )
    {
        cout << "Stack Element are : " << endl;
        for ( int i = top; i >= 0; i-- )
        {
            cout << stk[i] << " ";
        }
        cout << endl;
    }
    else cout << "Stack is Empty.." << endl;
}

int main()
{
    int choice, value;
    cout <<"1) Push in Stack\n";
    cout <<"2) Pop From Stack\n";
    cout <<"3) Top element in Stack\n";
    cout <<"4) Check Stack empty or not\n";
    cout <<"5) Print Stack Element\n";
    cout <<"6) Exit\n";


    do
    {

        cout << "Enter Choice\n";
        cin>>choice;





        switch (choice)
        {
        case 1:
        {
            cout << "Enter value to be pushed\n";
            cin>>value;
            push(value);
            break;

        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            Empty();
            break;
        }
        case 5:
        {
            Print();
            break;
        }
        case 6:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice\n";
        }

        }

    }
    while (choice != 6 );

    return 0;

}

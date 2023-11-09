#include<bits/stdc++.h>
using namespace std;

int insertEnd(int arr[], int n, int key, int capacity)
{
    if (n >= capacity) // Check array is full or not..
        return n;


    // Add the element in End if the array..
    arr[n] = key;

    // Update array size and return..
    return n + 1;


}

int main()
{

    int arr [20] = {2,3,4,4,3,4,3,5,6};
    int capacity = sizeof(arr) / sizeof(arr[0]);



    int pos = 9;
    int key = 300;

    cout << "Before Insertion\n";
    for ( int i = 0; i < pos; i++ )
    {
        cout << arr[i] << " ";
    }
    cout <<endl<< "After Insertion" << endl;

    pos = insertEnd(arr, pos, key, capacity);

    for (int i = 0; i < pos; i++ )
    {
        cout << arr[i] << " ";
    }



    return 0;
}


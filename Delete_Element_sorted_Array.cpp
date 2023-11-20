#include<bits/stdc++.h>
using namespace std;

// To Search key to be deleted

int Binary_Search(int arr[], int low, int high, int key)
{

    if ( high < low )
    {
        return -1;
    }
    int mid = ( low + high ) / 2;
    if ( key == arr[mid])
        return mid;
    if ( key > arr[mid] )
    {
        return Binary_Search(arr,(mid+1), high, key);

    }
    return Binary_Search(arr, low, (mid-1), key );
}

// Function to delete an element

int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = Binary_Search(arr,0,n-1,key);

    if ( pos == -1 )
    {
        cout << "Element not Found\n";
        return n;
    }

    for ( int i = pos; i < n-1; i++ )
    {
        arr[i] = arr[i+1];
    }
    return n-1;
}

/*
int Binary_Search(int arr[], int low, int high, int key)

{
    if ( high < low )
    {
        return -1;
    }
    int mid = ( low + high ) / 2;
    if ( key == arr[mid])
        return mid;
    if ( key > arr[mid] )
    {
        return Binary_Search(arr,(mid+1), high, key);

    }
    return Binary_Search(arr, low, (mid-1), key );
}

*/

int main()
{
    int arr[] = {2, 5, 6, 7, 8, 9, 10, 13,30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 9;

    cout << "Array Before Deletion\n";
    for ( int i = 0; i < n; i++ )
    {
        cout << arr[i] << " ";
    }

    n = deleteElement(arr, n, key );


    cout << "Array After Deletion\n";
    for ( int i = 0; i < n; i++ )
    {
        cout << arr[i] << " ";
    }

    return 0;
}

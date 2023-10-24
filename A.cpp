#include<bits/stdc++.h>
using namespace std;

bool searchInMatrix(vector<vector<int>> &arr, int x)
{
    int m = arr.size(), n = arr[0].size();

    for ( int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            if (arr[i][j] == x ){
                return true;
            }
        }
    }
    return false;
}


int main()
{
   
    int x=122;
    vector <vector<int> > arr = {
        {1,6,8,9,11,19},
        {20,22,28,29,31,32},
        {36,38,50,61,63,70},
        {64,66,100,122,128,130},
        {140,150,160,170,180,190}
    };
    //int m = arr.size(),n = arr[0].size();
    if(searchInMatrix(arr,x))
    {
        cout << "YES" << endl;

    }
    else {
        cout << "NO" << endl;
    }


   
    return 0;

}

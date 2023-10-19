#include<iostream>

using namespace std;

class Algorithm
{
    public:
    void result();

};
void Algorithm :: result()
{
    int n;
    cin >> n;

   
    while(n!=1)
    {
        if ( n%2 == 1)  n= 3*n+1;
        else  n = n/2;

        cout << n << " ";
    }

}

int main()
{
    Algorithm obj;
    obj.result();
    return 0;
}
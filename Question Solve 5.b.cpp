#include<iostream>
using namespace std;

class Result_Analysis
{
public:
    void Display();
};

void Result_Analysis :: Display()
{
    int a1[3]; int a2[3]; int a3[3];
    int Total_M_S1 = 0; int Total_M_S2 = 0; int Total_M_S3 = 0;

    cout << "Input Marks for Student 1 = "<< endl;

    for ( int i = 0; i < 3; i++ )
    {
        cin >> a1[i];
        Total_M_S1 += a1[i];
    }

    cout << "Input Marks for Student 2 = "<< endl;

    for ( int i = 0; i < 3; i++ )
    {
        cin >> a2[i];
        Total_M_S2 += a2[i];
    }

    cout << "Input Marks for Student 3 = "<< endl;

    for ( int i = 0; i < 3; i++ )
    {
        cin >> a3[i];
        Total_M_S3 += a3[i];
    }

    cout << "Total Marks Student 1 = " <<Total_M_S1<< endl;
    cout << "Total Marks Student 2 = " <<Total_M_S2<< endl;
    cout << "Total Marks Student 3 = " <<Total_M_S3<< endl;


}

int main()
{
    Result_Analysis obj;
    obj.Display();
    return 0;
}

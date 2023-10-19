#include<iostream>
using namespace std;

class Grade {
    public:
    void result();

};

void Grade :: result()
{
    int Marks;
    cout << "Enter Score (0-100)"<<endl;
    cin >> Marks;
    if ( Marks < 0 || Marks > 100)
    {
        cout << "Invalid Score" << endl;
    }

    switch(Marks/10)
    {
        case 10:
        case 9:
        case 8:
        //Marks between 80-100
        {
            cout << "Your Grade is : A+" << endl;
            break;
        }
        case 7:
        // Marks between 70-79
        {
            cout << "Your Grade is : A" << endl;
            break;

        }
        case 6:
        // Marks between 60 - 69
        {
            cout << "Your Grade is : B"<< endl;
            break;
        }
        case 5:
        // Marks between 50 - 59
        {
            cout << "Your Grade is : C"<<endl;
            break;
        }
        case 4:
        // Marks between 40 - 49
        {
            cout <<"Your Grade is : D"<<endl;
            break;
        }
        default:
        // Marks less than 40
        {
            cout << "Your Grade is : F" << endl;

        }


    }



}

int main()
{
    Grade obj;
    obj.result();
    return 0;
}

#include<iostream>
using namespace std;

class Result_Analysis
{
public:
    void Display();
};

void Result_Analysis :: Display()
{

    int NumStudent = 3;
    int NumSubject = 3;

    int Marks[NumStudent][NumSubject];
    int TotalMarks[NumStudent];
    int highestMarks[NumSubject];
    int RollNumber[NumSubject];


    // Input marks for each student and subject

    for ( int i = 0; i < NumStudent; i++ )
    {
        cout<< "Enter Marks for Student " << i+1 << ":";
        TotalMarks[i] = 0;

        for (int j = 0; j < NumSubject; j++ )
        {
            cin>> Marks[i][j];
            TotalMarks[i] += Marks[i][j];

        }
    }

    // Display total marks for each student
    for (int i = 0; i < NumStudent; i++ )\
    {
        cout << "Total marks for Student " << i + 1 <<": "<< TotalMarks[i] << endl;
    }

    // Find highest marks and corresponding roll number for each subject

    for ( int j = 0; j < NumSubject; j++ )
    {
        highestMarks[j] = INT_MIN;

        for (int i = 0; i < NumStudent; i++ )
        {
            if ( Marks[i][j] > highestMarks[j] )
            {
                highestMarks[j] = Marks[i][j];
                RollNumber[j] = i+1;
            }
        }
    }
    // Display Result

    for ( int j = 0; j < NumSubject; j++ )
    {
        cout<< "Subject " << j + 1 << " Highest Marks = : " << highestMarks[j] << ", Roll Number = "<< RollNumber[j] << endl;
    }
    // Highest mark Among Three Students
    int highestMark_Index = 0;
    for ( int i = 0; i < NumStudent; i++ )
    {
        if ( TotalMarks[i] > TotalMarks[highestMark_Index] )
        {
            highestMark_Index = i;
        }

    }

    cout << "Student with the highest Total Marks is Student : " << highestMark_Index + 1<< endl;
    cout << "Total Marks : " << TotalMarks[highestMark_Index]<< endl;



}


int main()
{
    Result_Analysis obj;
    obj.Display();
    return 0;
}

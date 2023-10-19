#include<iostream>
using namespace std;
class T4Tutorials
{
private:
	int a=0;
	int b=1;
	int t,num;
	public:
		T4Tutorials()
		{
			cout<<"enter the number :"<<endl;
			cin>>num;
			cout<<"the fibonacci series is :"<<a<<b;
			for(int j=1;j<=num;j++)
			{
				t=a+b;
				cout<<t;
				a=b;
				b=t;
			}
		}
		friend int show(T4Tutorials);
	};
	int show(T4Tutorials num)
	{
		cout<<"\n";
	}
	int main()
	{
		T4Tutorials num;
		show(num);
	}
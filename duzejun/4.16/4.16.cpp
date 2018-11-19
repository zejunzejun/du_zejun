#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;

    while (a!=-1)
    {    cout<<"enter hours worked (-1 to end):";
    cin >>a;

    cout << a << endl;
        cout <<"enter hourly rate of the employee($00.00):";
        cin>>b;

        if(a<=40)
        {
            b=10;
            c=a*b;
        cout<<"salary is"<<c<<endl;
        }
        else
        {
            b=15;
            c=400+(a-40)*b;
        cout<<"salary is"<<c<<endl;

        }
    }

    return 0;
}

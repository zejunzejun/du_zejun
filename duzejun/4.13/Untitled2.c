#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout<<"enter hours worked (-1 to end):";
    cin>>a;
    while (a!=-1)
    {
        cout<<"enter hourly rate of the employee:";
        cin>>b;
        if (a<=40);
        b=10;
        c=a*b;
        else
        b=15;
        c=400+(a-40)*15;
    }
}

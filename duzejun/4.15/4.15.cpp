#include <iostream>

using namespace std;

int main()
{
    double a = 0,b = 0;
    cout << "enter sales in dollars (-1 to end):";
    cin >> a;
    while (a!=-1)
    {
        b=a*0.09+200;
        cout<<"salary is:"<<b<<endl;


    }

}

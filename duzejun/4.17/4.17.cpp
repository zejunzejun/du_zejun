#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int number ;
    int largest;
    cout << "enter the first number:";
    cin>>largest;
    while (++counter<10)
    {
        cout << "enter the next number:";
        cin>>number;
        if(number>largest)
            largest=number;
    }
    cout<<"largest is"<<largest<<endl;
}

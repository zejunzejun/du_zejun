#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   double c=0 ,d=0,sum1=0,sum2=0;
   cout<<"Enter miles driven (-1 to quit):";
   cin >> a;
   while(a!=-1)
   {
   cout<<"Enter gallons used:";
   cin >> b;
   c=a/b;
   cout<< "MPG this trip:"<<c<<endl;
   sum1+=a;
   sum2+=b;
   d=sum1/sum2;
   cout<< "total mpg:"<<d<<endl;
   cout<<"\nEnter miles driven (-1 to quit):";
   cin >> a;
   }
}

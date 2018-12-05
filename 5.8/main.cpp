#include <iostream>
using namespace std;

int main()
{
   int a;
   int b;
   int smallest;

   cout << "Enter the number of integers to be processed ";
   cout << "followed by the integers: " << endl;
   cin >> a >> smallest;

   for ( int i = 2; i <= a; i++ )
   {
      cin >> b;


      if ( b < smallest )
         smallest = b;
   }


   cout << "\nThe smallest integer is: " << smallest << endl;
}

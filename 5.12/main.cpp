#include <iostream>
using namespace std;

int main()
{
   int row;
   int column;
   int space;


   for ( row = 1; row <= 10; row++ )
   {
      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   }
   cout << endl;
   for ( row = 10; row >= 1; row-- )
   {
      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   }

   cout << endl;

   for ( row = 10; row >= 1; row-- )
   {
      for ( space = 10; space > row; space-- )
         cout << " ";

      for ( column = 1; column <= row; column++ )
         cout << "*";


   }

   cout << endl
   for ( row = 10; row >= 1; row-- )
   {
      for ( space = 1; space < row; space++ )
         cout << " ";

      for ( column = 10; column >= row; column-- )
         cout << "*";

      cout << endl;
   }
}

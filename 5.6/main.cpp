int main()
{
   int a;
   int b = 0;
   int c = 0;


   cout << "Enter integers (9999 to end):" << endl;
   cin >> a;


   while ( a != 9999 )
   {
      c += a;
      b++;

      cin >> value;
   }
   if ( b != 0 )
      cout << "\nThe average is: "
         << static_cast< double > ( c ) / b << endl;
   else
      cout << "\nNo a were entered." << endl;
}

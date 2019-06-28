10.11
头文件：
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial
{
public:
   static const int maxTerms = 100; // maximum number of terms

   Polynomial();
   Polynomial operator+( const Polynomial & ) const; // addition
   Polynomial operator-( const Polynomial & ) const; // subtraction
   Polynomial operator*( const Polynomial & ) const; // multiplication
   Polynomial &operator=( const Polynomial & ); // assignment
   Polynomial &operator+=( const Polynomial & );
   Polynomial &operator-=( const Polynomial & );
   Polynomial &operator*=( const Polynomial & );
   void enterTerms();
   void printPolynomial() const;
   int getNumberOfTerms() const; // user can only retrieve value
   int getTermExponent( int ) const;
   int getTermCoefficient( int ) const;
   void setCoefficient( int, int ); // set coefficient of a specific term
   ~Polynomial(); // destructor
private:
   int numberOfTerms;
   int exponents[ maxTerms ]; // exponent array
   int coefficients[ maxTerms ]; // coefficients array
   static void polynomialCombine( Polynomial & ); // combine common terms
}; // end class Polynomial

#endif
成员函数：
#include <iostream> 
#include <iomanip> 
#include "Polynomial.h"
using namespace std;

Polynomial::Polynomial()
{
   for ( int t = 0; t < maxTerms; t++ )
   {
      coefficients[ t ] = 0;
      exponents[ t ] = 0;
   } // end for

   numberOfTerms = 0;
} // end Polynomial constructor

void Polynomial::printPolynomial() const
{
   int start;
   bool zero = false;

   if ( coefficients[ 0 ] ) // output constants
   {
      cout << coefficients[ 0 ];
      start = 1;
      zero = true; // at least one term exists
   }
   else
   {
      if ( coefficients[ 1 ] )
      {
         cout << coefficients[ 1 ] << 'x';  // constant does not exist
                                            // so output first term
                                            // without a sign
         if ( ( exponents[ 1 ] != 0 ) && ( exponents[ 1 ] != 1 ) )
            cout << '^' << exponents[ 1 ];

         zero = true;  // at least one term exists
      } // end inner if
      
      start = 2;
   } // end else

   // output remaining polynomial terms
   for ( int x = start; x < maxTerms; x++ )
   {
      if ( coefficients[ x ] != 0 )
      {
// Classes2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CVector
{
public:
  int x, y;
  static int n;
  
  // Default constructor
  CVector()
  {
    // For every instance generated, n grows by one.
    n++;
  };

  // Constructor
  CVector( int, int );

  // Overload of + operator
  CVector operator + ( CVector );

  bool itsme( CVector& dummy )
  {
    if ( &dummy == this )
      return true;
    else return false;
  };

};

CVector::CVector( int a, int b ) : CVector()
{
  x = a;
  y = b;
};

CVector CVector::operator+ ( CVector param )
{
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}


int CVector::n = 33;

int _tmain(int argc, _TCHAR* argv[])
{
  CVector a( 3, 1 );
  CVector b( 7, 9 );
  CVector c;
  c = a + b;

  cout << a.itsme( b ) << endl;
  cout << b.itsme( b ) << endl;

  cout << "x: " << c.x << "  y: " << c.y << endl;
  cout << "n: " << CVector::n << endl;
  cin.get();
	return 0;
}


// Classes1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


class CRect
{
public:
  
  // Default Constructor
  CRect( )
  {
    x = new int; y = new int;
    cout << "Construction..." << endl;
  };

  //// Constructor (allocate memory)
  //CRect( int a, int b)
  //{
  //  x = a; y = b;
  //};
  
  // Destructor (deallocate dynamic memory)
  ~CRect()
  {
    delete x; delete y;
    cout << "Destruction..." << endl;
  };
  
  void setValues( int a, int b )
  {
    *x = a; *y = b;
  };
  
  int area( void )
  {
    return *x * *y;
  };

private:
  int * x; int * y;
};

int _tmain( int argc, _TCHAR* argv[] )
{
  // Local member (only "lives" within curly braces and then it calls implicitly destructor)
  {

    CRect r2; 
  }
  // When the curly braces above is reached (r2 is disposed, i.e. destructor is called)

  {
    // Static CRect, i.e. r1
    CRect r1;
    // Dynamic CRect, i.e. pRect
    CRect * pRect = new CRect();
    r1.setValues( 23, 80 );
    pRect->setValues( 55, 66 );

    // Dynamic memory must be deallocated.
    delete pRect;
  }
  // When the curly braces above is reached (r1 and pRect are disposed, i.e. destructor is called)

  cin.get();
	return 0;
}


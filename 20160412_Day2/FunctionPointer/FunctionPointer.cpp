// FunctionPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int addition( int a, int b )
{
  return ( a + b );
}

int subtraction( int a, int b )
{
  return ( a - b );
}

// As 3rd input parameter, write output (int) and inputs (int, int) of the function to call *funcToCall
int operation( int x, int y, int( *funcToCall )( int, int ) )
{
  int result;
  result = ( *funcToCall )( x, y );
  return result;

}

int _tmain(int argc, _TCHAR* argv[])
{
  int m1, m2;
  // Pointer to a function called minus. The signature can be observed.
  int( *minus ) ( int, int ) = subtraction;

  // Now, using the pointer to a function "minus"
  m1 = operation( 7, 5, minus );
  cout << " 7 - 5 = " << m1 << endl;
  // add, does not even require to create the pointer, simply use the function method's name (i.e. addition)
  m2 = operation( 7, 5, addition );
  cout << " 7 + 5 = " << m2 << endl;

  cin.get();
  return 0;
}


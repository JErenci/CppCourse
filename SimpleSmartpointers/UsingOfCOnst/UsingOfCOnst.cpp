// UsingOfCOnst.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int x( const int * const ptr )
{
  int i = 0;
  return i++;
};


int _tmain(int argc, _TCHAR* argv[])
{
  for ( int i = 0; i < 10; i++ )
  {
    cout << x( NULL );
  }
  cin.get();
  return 0;
}


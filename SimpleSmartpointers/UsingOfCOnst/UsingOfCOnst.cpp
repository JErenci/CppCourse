// UsingOfCOnst.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


namespace GLOBAS
{
  static int i = 0;
}


int preIncrement( const int * const ptr )
{
  static int i = 0;
  return ++i;
};

int postIncrement( const int * const ptr )
{
  static int i = 0;
  return i++;
};


int _tmain(int argc, _TCHAR* argv[])
{
  for ( int i = 0; i < 10; i++ )
  {
    cout << preIncrement( NULL ) << endl;
    cout << postIncrement( NULL ) << endl;
  }

  cout << "Static int i=" << GLOBAS::i << endl;

  GLOBAS::i = 32432;

  cout << "Static int i=" << GLOBAS::i << endl;

  cin.get();

  return 0;
}


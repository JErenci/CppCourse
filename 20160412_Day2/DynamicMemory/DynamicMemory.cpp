// DynamicMemory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Dynamic Memory managed by Memory Manager of OS (even in embedded systems) --> Give an application storage (and release it)
// 
int _tmain(int argc, _TCHAR* argv[])
{
  int i, n;
  int * p;

  cout << "How many numbers?" << endl;
  // Force an exception inputing #Numbers = 9999999999999999999999999

  cin >> i;

  // If exception happen when allocating memory,, one can use (nothrow) to avoid it
  p = new (nothrow) int[i];

  if ( p == 0 )
  {
    cout << "ERROR: memory could not be allocated" << endl;
    cin.get();
  }
  else
  {
    for ( n = 0; n < i; n++ )
    {
      cout << "number: ";
      cin >> p[n];
    }

    cout << "Values: ";
    for ( n = 0; n < i; n++ )
    {
      cout << p[n] << ", ";
    }
    cout << endl;

    // Unmanaged memory should be manually deleted.
    delete[] p;
  }

  cin.get();
  return 0;
}


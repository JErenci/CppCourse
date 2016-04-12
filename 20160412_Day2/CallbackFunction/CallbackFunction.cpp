// CallbackFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Describe the prototype of the callback function (i.e. someCallback)
typedef int( *CallbackType )( float );

// The doWork function executes the callback
void doWork( CallbackType callback )
{
  float f = 5.5f;
  int result = callback( f );
  //Do something...
}

// someCallback is usually in a non-accessible part of the code (e.g. client code, 3rd party receiver) 
//used by the server (e.g. as a service)
int someCallback( float value )
{
  int res = (int) value;
  // Does something cool with value
  return res;
}

int _tmain(int argc, _TCHAR* argv[])
{
  // there is type checking, i.e. if the parameter someCallback does NOT match the doWork signature -> compiler error
  doWork( &someCallback );

  // Usually several callback functions are created (e.g. someCallback) but only one doWork() function, when necessary

  cin.get();
  return 0;
}


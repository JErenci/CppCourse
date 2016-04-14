// ExceptionHandling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


int _tmain( int argc, _TCHAR* argv[] )
{
  int i = 0;
  //int x[8];
  try
  {
    int x = 8888888888888888;
    *(&x) = 5555555555555;
    throw new exception("asdfagasdf");
  }
  catch ( int i )
  {
    cout << i << endl;
  }
  catch ( const vector<string> i )
  {
    cout << "ERROR1:" << i[0] << endl;
  }
  catch ( std::exception ptr )
  {
    cout << "ERROR2:" << ptr.what() << endl;
  }
  catch ( runtime_error err )
  {
    cout << "ERROR3:" << err.what() << endl;
  }
  catch ( void* )
  {
    cout << "ERROR4:" << endl;
  }

  cin.get();
  return 0;
}


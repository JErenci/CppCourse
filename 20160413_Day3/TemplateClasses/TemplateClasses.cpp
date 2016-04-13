// TemplateClasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;




template <class T>
T mypair<T>::getmax()
{
  T result;
  result = ( a > b ) ? a : b;
  return result;
}


int _tmain(int argc, _TCHAR* argv[])
{
  mypair<int> myobject( 100, 75 );
  cout << myobject.getmax();
  cin.get();
  return 0;
}


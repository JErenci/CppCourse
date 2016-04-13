// TemplateClasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


// Templates type can have one or more default values
template <class T> // = char, int N>
class mypair
{
  //T data[N];
  T a, b;
public:
  mypair( T first, T second )
  {
    a = first;
    b = second;
  };
  T getmax();
};


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


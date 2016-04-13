// SpecializedTemplate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<class T>
class mycontainer
{
  T element;
public:
  mycontainer( T arg)
  {
    element = arg;
  };
  T increase()
  {
    return ++element;
  }
};

// Template specialiation, T is of type char
template<>
class mycontainer<char>
{
  char element;
public:
  mycontainer( char arg )
  {
    element = arg;
  };

  char uppercase()
  {
    if ( ( element >= 'a' ) && ( element <= 'z' ) )
    {
      element += 'A' - 'a';
      return element;
    }
    else
      return element;
  };
};

int _tmain(int argc, _TCHAR* argv[])
{
  mycontainer<int> myint( 66 );
  mycontainer<char> mychar( 'd' );
  cout << myint.increase() << endl;

  // increase() cannot by used in char template, i.e. mychar
  cout << mychar.uppercase() << endl;
  cin.get();
  return 0;
}


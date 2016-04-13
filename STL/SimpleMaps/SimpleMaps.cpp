// SimpleMaps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <list>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  list<char> coll;
  for ( char i = 'a'; i <= 'z'; i++ )
  {
    coll.push_back( i );
  }

  list<char>::const_iterator pos;
  auto pos1 = coll.begin();

  //for ( pos = coll.begin(); pos != coll.end(); ++pos )
  //{

  //}


  cin.get();

	return 0;
}


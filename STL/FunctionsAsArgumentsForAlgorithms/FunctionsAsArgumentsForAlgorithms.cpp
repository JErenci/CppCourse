// FunctionsAsArgumentsForAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


void print( int el )
{
  cout << el << " ";
}

int _tmain(int argc, _TCHAR* argv[])
{
  vector<int> coll;
  for ( int i = 0; i < 10; ++i )
  {
    coll.push_back( i );
  }

  for_each( coll.begin(), coll.end(), print );

  cin.get();


  return 0;
}


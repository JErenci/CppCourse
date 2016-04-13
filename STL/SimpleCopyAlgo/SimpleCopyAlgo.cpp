// SimpleCopyAlgo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
  list<int> coll1;
  for ( int i = 0; i < 10; i++ )
    coll1.push_back( i );

  vector<int> coll2;
  coll2.resize( coll1.size() );
  copy( coll1.begin(), coll1.end(), coll2.begin() );


  deque<int> coll3;
  coll3.resize( coll1.size() );
  copy( coll1.begin(), coll1.end(), coll3.begin() );


  cin.get();

  return 0;
}


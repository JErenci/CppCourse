// SingleAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
  vector<int> coll;
  coll.push_back( 2 ); coll.push_back( 5 ); coll.push_back( 4 );
  coll.push_back( 1 ); coll.push_back( 6 ); coll.push_back( 3 );

  auto minpos = min_element( coll.cbegin(), coll.cend() );
  cout << "min: " << *minpos << endl;

  auto maxpos = max_element( coll.cbegin(), coll.cend() );
  cout << "min: " << *maxpos << endl;


  // sort all elements
  sort( coll.begin(), coll.end() );

  for ( auto el : coll )
  {
    cout << el << ' ';
  }

  cout << endl;

  // reverse all elements
  reverse( coll.begin(), coll.end() );

  for ( auto el : coll )
  {
    cout << el << ' ';
  }

  cout << endl;

  //vector<int>::iterator pos3;
  auto pos3 = find( coll.begin(), coll.end(), 3 );
  sort( pos3, coll.end() );

  for ( auto el : coll )
  {
    cout << el << ' ';
  }


  cin.get();

	return 0;
}


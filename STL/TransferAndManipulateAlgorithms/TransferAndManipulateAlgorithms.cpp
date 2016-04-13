// TransferAndManipulateAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

// Extension methods equivalent in C#
int square( int value )
{
  return value*value;
}


void print( int el )
{
  cout << el << "\t ";
}


int _tmain(int argc, _TCHAR* argv[])
{
  set<int> coll1;
  vector<int>coll2;
  for ( int i = 0; i < 10; i++ )
    coll1.insert( i );

  transform( coll1.begin(), coll1.end(),    // Source 
    back_inserter(coll2),                  // Destination
    square );

  for_each( coll1.begin(), coll1.end(), print );
  cout << endl;

  for_each( coll2.begin(), coll2.end(), print );
  cin.get();

  return 0;
}


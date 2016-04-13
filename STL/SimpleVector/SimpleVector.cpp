// SimpleVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <array>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  // Vector
  vector<int> coll;
  for ( int i = 0; i < 6; i++ )
  {
    coll.push_back( i );
  }
  for ( int i = 0; i < 6; i++ )
  {
    cout << coll[i] << endl;
  }

  // Array
  array<string, 5> arr = { "hello", "world" };
  for ( int i = 0; i < arr.size(); i++ )
  {
    cout << i << ": " << arr[i] << " - ";

  }

  // List
  list<char> li;
  list<char> *lis = new list<char>;
  for ( char c = 'a'; c <= 'z'; ++c )
  {
    li.push_back( c );
  }
  cout << endl;

  for ( auto itm : li )
  {
    cout << itm << ' ';
  }
  cout << endl;

  while ( !li.empty() )
  {
    cout << li.front() << ' ';
    li.pop_front();
  }
  cout << endl;

  cin.get();

  return 0;
}


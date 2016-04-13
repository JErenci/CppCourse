// 20160413_Day3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<class T>
T GetMax( T a, T b )
{
  T result;
  result = ( a > b ) ? a : b;
  return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
  int i = 5, j = 6, k;
  long l = 5, m = 6, n;
  k = GetMax<int>( i, j );
  k = GetMax( i, j );
  n = GetMax<long>( i, j );
  cout << "k: " << k << endl;
  cout << "n: " << n << endl;
  cin.get();
  return 0;
}


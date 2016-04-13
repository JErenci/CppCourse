// SimpleNamespaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

namespace first
{
  int var = 3;
}
namespace second
{
  int var = 333;
}


int _tmain(int argc, _TCHAR* argv[])
{
  
  using namespace first;
  cout << var << endl;
  
  using namespace second;
  cout << second::var << endl;
  // Using namespaces with same variables my be ambiguous and require writing the namespace (see line above).

  cin.get();
  return 0;
}


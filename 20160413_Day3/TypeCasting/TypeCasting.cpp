// TypeCasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CDummy
{
public:
  int i, j;
};
class CAddition
{
  int x, y;
public:
  // Constructor with default values of 0
  CAddition()
  {
  };
  CAddition( int a = 0, int b = 0 )
  {
    x = a;
    y = b;
  };
  int result()
  {
    return x + y;
  };

};

int _tmain(int argc, _TCHAR* argv[])
{
  CDummy d;
  d.i = 44;
  d.j = 33;
  CAddition * pAdd;
  
  pAdd = (CAddition*) &d;
  // This is a implicit type casting of CDummy to CAddition.
  // If the CDummy member types (i.e. i and j) are of different type to the members of CAddition (i.e. x and y),
  // Then result() will be wrong given that the size of members in CDummy and CAddition does NOT match.
  cout << pAdd->result() << endl;
  cin.get();
	return 0;
}


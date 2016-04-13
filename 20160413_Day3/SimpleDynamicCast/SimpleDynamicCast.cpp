// SimpleDynamicCast.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


class CBase
{
  virtual void dummy()
  {
  };
};

class CDerived : public CBase
{
  int a;
};


int _tmain(int argc, _TCHAR* argv[])
{
  CBase * pba = new CDerived;
  CBase * pbb = new CBase;
  CDerived * pd;
  int i = 44;

  pd = dynamic_cast<CDerived*>( pba );
  if ( pd == 0 )
  {
    cout << "Null pointer on first cast ..." << endl;
  }

  pd = dynamic_cast<CDerived*>( pbb );
  if ( pd == 0 )
  {
    cout << "Null pointer on second cast ..." << endl;
  }

  pd = dynamic_cast<CDerived*>( &cin );
  if ( pd == 0 )
  {
    cout << "Null pointer on third cast ..." << endl;
  }

  // Reinterpret cast
  //A *a = new A;
  //B * b = reinterpret_cast<B*>( a );
  //if ( b == 0 )
  //  cout << "Cast not possible..." << endl;


  cin.get();

  return 0;
}


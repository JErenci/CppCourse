// VirtualMembers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
  int get()
  {
    return 1;
  };
  virtual int getVirt()
  {
    return 2;
  };
};

class B : public A
{
public:
  int get()
  {
    return 11;
  };
  virtual int getVirt()
  {
    return 22;
  };

};

int _tmain(int argc, _TCHAR* argv[])
{
  A *a = new A();
  cout << "get, with a = new A()" << a->get() << endl;
  cout << "getVirt, with a = new A()" << a->getVirt() << endl;

  a = new B();
  cout << "get, with a = new B()" << a->get() << endl;
  cout << "getVirt, with a = new B()" << a->getVirt() << endl;


  B b;
  cout << ( (A) b ).get() << endl;
  cout << (&((A) b ))->getVirt() << endl;



  cin.get();
	return 0;
}
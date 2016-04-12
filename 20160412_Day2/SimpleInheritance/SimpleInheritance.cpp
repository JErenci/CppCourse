// SimpleInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


class CPolygon
{
protected:
  int width, height;
public:
  virtual int area() = 0;
  void setValues( int a, int b )
  {
    width = a;
    height = b;
  }
};

class COutput
{
public:
  void write( int i )
  {
    cout << "Anything: " << i << endl;
  }
};

class CRect : public CPolygon, public COutput
{
public:
  int area()
  {
    return (width*height);
  }
  void write( int i )
  {
    cout << "Rect:: " << i << endl;
  }
};

class CTriangle : public CPolygon, public COutput
{
public:
  int area()
  {
    return ( width*height / 2);
  }
  void write( int i )
  {
    cout << "Triangle:: " << i << endl;
  }
};

int _tmain(int argc, _TCHAR* argv[])
{
  CRect r;
  CTriangle t;

  r.setValues( 4, 5 );
  t.setValues( 4, 5 );
  r.write( r.area() );
  t.write( t.area() );

  COutput outputs[2];
  outputs[0] = r;
  outputs[1] = t;

  outputs[0].write( r.area() );
  outputs[1].write( t.area() );

  cin.get();

  return 0;
}


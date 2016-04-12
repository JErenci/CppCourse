// FriendFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



class CSquare
{
  int side;
public:
  friend class CRect;
};


class CRect
{
  int width, height;
public:
  void setVals( int a, int b )
  {
    width = a;
    height = b;
  };
  int area()
  {
    return width*height;
  }
  friend CRect duplicate( CRect param );
  void convert( CSquare a );
};



void CRect::convert( CSquare a )
{
  width = a.side;
  height = a.side;
};

//CRect duplicate( CRect param )
//{
//
//}


int _tmain(int argc, _TCHAR* argv[])
{
  //CRect tmp;
  //tmp.wid
  cin.get();
	return 0;
}


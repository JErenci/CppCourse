// 20160412_Day2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

inline int add( int i, int x );
//int add2( int& i, int x = 4 )
//{
//  return i++; i + x;
//}
//int add2( int& i, int x )
//{
//  return i++; i + x;
//}


void printarray( int arg[], int length )
{
  for ( int i = 0; i < length; i++ )
  {
    cout << arg[i] << " ";
  }
  cout << "\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
  //int age;
  //cout << "Type your age:";
  //cin >> age;
  //cout << "\n";


  int first[] = { 15, 10, 3 };
  int second[] = { 1, 2, 3, 4, 5 };

  //printarray( first, 3 );
  //printarray( second, 5 );


  char question1[] = "Please?\n";
  char question2[] = { 'P', 'l', 'e', 'a', 's', 'e', '?', '\n','\0' };

  cout << "question1: " << question1;
  cout << "question2: " << question2;

  int field[] = { 15, 56, 89, 88, 1 };
  //int jimmy[3][2] = { 15, 56, 89, 88, 1 };
  int jimmy2[6] = { 15, 56, 89, 88, 1, 33 };

  //return 0;
  cin.get();


  int i = field[2], a = 5;
  //add( i, a );
}


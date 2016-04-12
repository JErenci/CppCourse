// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain( int argc, _TCHAR* argv[] )
{
  int firstVal, secondVal;
  int * mypointer, *mypointer2;

  mypointer = &firstVal;
  firstVal = 10;
  *mypointer = 20;
  secondVal = *mypointer;
  mypointer2 = &secondVal;


  cout << "firstVal: "  << firstVal << endl;
  cout << "Memory address : " << mypointer2 << endl;



  int numbers[5];
  int * p;
  p = numbers;
  cout << "First attempt: " << *p << endl;

  *p = 10;
  cout << "Second attempt: " << *p << endl;

  p++;
  *p = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  //p = numbers + 3; 
  *(p+3) = 50;
  *(++p ) = -20;

  cout << "Third attempt: ";

  for ( int i = 0; i < 5; i++ )
  {
    cout << numbers[i] << " ";
  }

  cout << endl;

	cin.get();
	//return 0;

}


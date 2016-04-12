// AnotherTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



struct
{
  char title[50];
  char author[50];
  union
  {
    float euros;
    int yens;
  } price;
}book;

enum colors_t
{
  black = 1, 
  white,
  red
} color;


int _tmain(int argc, _TCHAR* argv[])
{
  color = black;
  book.price.euros = 4.44f;
  book.price.yens = 400;
  //return 0;
}


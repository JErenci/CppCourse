// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>


// Templates type can have one or more default values
template <class T = char, int N>
class mypair
{
  T data[N]
  T a, b;
public:
  mypair( T first, T second )
  {
    a = first;
    b = second;
  };
  T getmax();
};


// TODO: reference additional headers your program requires here

// SimpleFuture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <future>
#include <thread>
#include <string>
#include <iostream>
using namespace std;


long sum = 0;

void sumWorker()
{
  for ( int i = 0; i < 1000000; i++ )
  {
    sum++;
  }
}


int doWork( char c, int ms )
{
  for ( int i = 0; i < 10; i++ )
  {
    cout.put( c ).flush();
    this_thread::sleep_for( chrono::milliseconds( ms ) );
  }
  return c;
}


int func1()
{
  return doWork( '+', 2000);
};

int func2()
{
  return doWork( '*', 1000 );
};

int _tmain(int argc, _TCHAR* argv[])
{
  //cout << "App startet..." << endl;

  //future<int> result1( async( func1 ) );

  //int result = func2() + result1.get();

  //cout << "App finished ..." << endl;

  future<void> sum1( async( sumWorker ) );
  future<void> sum2( async( sumWorker ) );
  future<void> sum3( async( sumWorker ) );

  sum1.get(); sum2.get(); sum3.get();
  cout << endl << "sum: " << sum << endl;

  cout << endl << "App finished: " << endl;

  cin.get();

  return 0;
}


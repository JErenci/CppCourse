// SimpleFuture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <future>
#include <thread>
#include <string>
#include <iostream>
#include <condition_variable>
#include <atomic>
using namespace std;


long sum = 0;
mutex mutexSum;
// Thread-safe variable. Requires exception-handling implementation
atomic<int> atomicSum( 0 );


void add()
{
  // The block that happens between lock and unlock happens independently for every thread!
  mutexSum.lock();
  sum++;
  mutexSum.unlock();
};

void add2()
{
  {
    // Avoid locking/unlocking necessity, given that the scope (curly braces section) is lost
    lock_guard<mutex> lg( mutexSum );
    sum++;
  }
};

void add3()
{
  {
    // Avoid locking/unlocking necessity, given that the scope (curly braces section) is lost
    atomicSum++;
  }
};

void sumWorker()
{
  for ( int i = 0; i < 1000000; i++ )
  {
    add2();
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
  cout << "App started..." << endl;

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


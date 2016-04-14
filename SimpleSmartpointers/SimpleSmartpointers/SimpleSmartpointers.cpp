// SimpleSmartpointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  // Smart pointers allow to reuse pointers more than once!
  shared_ptr<string> pToDelete( new string( "andi" ),
    [] ( string* p ) {
    cout << "!!!!delete: " << *p << endl;
  } );

  pToDelete = nullptr;
  cin.get();

  shared_ptr<string> p1( new string( "andi" ) );
  shared_ptr<string> p2( new string( "david" ) );

  string s = "HUHUHUH";
  shared_ptr<string> ps( &s );

  ( *p1 )[0] = 'A';
  p2->replace( 0, 1, "D" );

  vector<shared_ptr<string>> coll;
  coll.push_back( p1 );
  coll.push_back( p2 );
  coll.push_back( p1 );
  coll.push_back( p2 );
  coll.push_back( p1 );
  coll.push_back( p2 );

  for ( auto ptr : coll )
  {
    cout << *ptr << " ";
  }
  cout << endl;

  *p1 = "Klaus";
  for ( auto ptr : coll )
  {
    cout << *ptr << " ";
  }
  cout << endl;


  // New scope, p3 pointer is destroyed after curly braces are closed
  {
    shared_ptr<string> p3 = p1;
    cout << "use_count: " << coll[0].use_count() << endl; // Number of instances of first element in coll( "Klaus" ) -> 5, 3 inside coll
    cout << *coll[0] << endl; 
    cout << "use_count: " << p3.use_count() << endl;      // Number of instances of p3( "klaus" )-> 5, 3 inside coll
    cout << *p3 << endl;
    cout << "use_count: " << p1.use_count() << endl;      // Number of instances of p1( "klaus" )-> 5, 3 inside coll
    cout << *p1 << endl;
  }

  cin.get();
  
  p1.reset( new string( "NEUE" ) );
  cout << "use_count: " << coll[0].use_count() << endl;   // Number of instances of 1st element in coll ("klaus") there are 3 in coll) plus 2 more outside coll, that were reset
  for ( auto ptr : coll )
  {
    cout << *ptr << " ";
  }
  cout << endl;

  cout << "use_count: " << p1.use_count() << endl;        // Number of instances of p1 (just 1, after reset to "NEUE")
  cout << *p1 << endl;

  //cin.get();
	return 0;
}


// UsingLambdaInAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <deque>
#include <iterator>
#include <iostream>
//#include <string>
using namespace std;


class Person
{
public:
  string firstname;
  string lastname;
  Person( string f, string l )
  {
    firstname = f;
    lastname = l;
  };
};



int _tmain(int argc, _TCHAR* argv[])
{

  deque<int> coll;
  for ( int i = 0; i < 30; ++i )
  {
    coll.push_back( i );
  }

  int min = 15;
  int max = 22;

  auto pos = find_if( coll.begin(), coll.end(),
    [=] ( int el ) {return el >= min && el < max; } );

  cout << "First element >=15 ..." << *pos << endl;

  deque<Person> collPersons;
  Person p1( "Klaus", "Schreiber" );
  Person p2( "Achim", "Zucker" );

  collPersons.push_back( p1 );
  collPersons.push_back( p2 );
  collPersons.push_back( Person("Zeta", "A") );
  collPersons.push_back( Person( "Omega", "B" ) );
  collPersons.push_back( Person( "Alpha", "A" ) );
  sort( collPersons.begin(), collPersons.end(),
    [] ( const Person& p1, const Person& p2 )
  {
    return p1.lastname < p2.lastname ||
      p1.lastname == p2.lastname && p1.firstname < p2.firstname;
  } );


  for_each( collPersons.begin(), collPersons.end(),
    [] ( const Person& p ) { 
    cout << " " << endl;
    //cout<< p.firstname << " " << p.lastname << endl;
  } );


  cin.get();
  return 0;
}


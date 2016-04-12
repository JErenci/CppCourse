// DataStructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define MAX 12

// struct instances and struct Arrays can be created directy after struct declaration (e.g. klaus, all[]) 
struct person_t
{
  string name;
  int yearOfBirth;
};

person_t klaus, all[MAX];

struct office_t
{
  string name;
  person_t user;
} room1;


person_t * pPerson;

typedef char C;
typedef char row[50];


int _tmain(int argc, _TCHAR* argv[])
{


  // person_t structure use
  klaus.name = "Klaus";
  klaus.yearOfBirth = 1900;

  all[0].name = klaus.name;
  pPerson = all;

  ( pPerson+1 )->name = "Erwin";
  pPerson->name = "Phil";

  for ( int i = 0; i < MAX; ++i )
  {
    //cout << pPerson[i] << endl;
  }

  // Office structure use
  office_t * pOffice = &room1;
  room1.user.name = "";
  pOffice->user.name = "";

  // r and r1 are equivalent, r isu using the typedef (improved readibility)
  // When using templates, it makes sense to redefine the template for use
  // Also it is useful to redefine the variable type (e.g. GPS_WEEK) as uint32 or int64
  row r = "ssafssdfasdfad";
  char r1[50] = "ssafssdfasdfad";
  // s and s1 are equivalent (using the string typedef and its template declaration)
  string s;
  basic_string<char, char_traits<char>, allocator<char> > s1;

  cin.get();
  return 0;
}


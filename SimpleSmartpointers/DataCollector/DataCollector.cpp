// DataCollector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;


class DataCollector
{
private:
  string path;
public:
  vector<vector<double>> rowData;
  void readData()
  {
    ifstream in( "C:\\Users\\JErenci\\Source\\Repos\\CppCourse\\SimpleSmartpointers\\DataCollector\\data.txt" );
    if ( in )
    {
      string line;
      while ( getline( in, line ) )
      {
        stringstream sep( line );
        string field;

        rowData.push_back( vector<double>() );

        while ( getline( sep, field, ',' ) )
        {
          rowData.back().push_back( stod( field ) );
        }

      }
    }
  }

  double proceedOneValue( function<double(vector<vector<double>>)> func)
  {
    return func( rowData );
  }

  vector<double> proceedVec( function < vector<double>( vector<vector<double>>)> func )
  {
    return func( rowData );
  }
};

int _tmain(int argc, _TCHAR* argv[])
{

  return 0;
}


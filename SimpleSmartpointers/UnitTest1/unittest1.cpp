#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DataCollector\DataCollector.cpp"
#include <algorithm>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{

  double getSum( vector<vector<double>> data )
  {
    double res = 0;
    for ( auto r : data )
    {
      auto val1 = *( r.begin() );
    }

    return res;

  }

  TEST_CLASS( UnitTest1 )
  {
    static double getSum( vector<vector<double>> data )
    {
      double res = 0;
      for ( auto r : data )
      {
        auto val1 = *( r.begin() );
      }

      return res;

    }

    TEST_METHOD( TestReadData )
    {
      DataCollector toTest;
      toTest.readData();
      Assert::AreEqual( 3, (int) toTest.rowData.size() );
      // TODO: Your test code here
    }

    TEST_METHOD( TestReadDataOneValue )
    {
      DataCollector toTest;
      toTest.readData();

      auto result = toTest.proceedOneValue( getSum );

      // Call to the getSum in UnitTest1 workspace
      Assert::AreEqual( 57.0, result );

      // Call the static method in UnitTest1
      Assert::AreEqual( 57.0, toTest.proceedOneValue( UnitTest1::getSum ) );

    }

    TEST_METHOD( TestVector )
    {
      DataCollector toTest;
      toTest.readData();

      auto result = toTest.proceedVec( [] ( vector<vector<double>> data )
      {
        vector<double> result( data.size() );
        for ( int i = 0; i < data.size(); i++ )
        {
          result[i] = data[i][1];
        }
        return result;
      } );

      Assert::AreEqual( 3, (int) result.size() );

    }
  };
}
#include <iostream>

#include "calculatornew.hpp"
using namespace std;

int main()
{
    float a, b;
    cin >> a;
    cin >> b;

  cout << sum(a, b) << endl;
  cout << sub(a, b) << endl;
  cout << pow1(a, b) << endl;
  cout << dev(a, b) << endl;
  cout << sqrt1(a) << endl;
  
}

// this feature is only available in c++ not available in c
#include <iostream>

using namespace std;

int main(){

  int a = 10;
  int &r = a;

  cout << a << endl;
  r++;
  cout << a << endl;
  cout << r << endl;

  int b = 30;
  r = b;

  cout << a << endl;
  cout << r << endl;
  cout << b << endl;

  // outputs:
  // 10
  // 11
  // 11
  // 30
  // 30
  // 30

  return 0;
}
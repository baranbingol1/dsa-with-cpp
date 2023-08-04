#include <iostream>

using namespace std;

struct Rectangle{
  int height;
  int width;
} r={1,2}; //global initialization

struct Rectangle2{
  int height;
  int width;
  char x;
} r2;

// global initialization equilavent
// struct Rectangle r;

int main(){

  // r.height = 10;
  // r.width = 12;

  cout << "Size of a rectangle: " << sizeof(r) << endl; // 8 bytes expected 
  cout << "Height of rectangle: " << r.height << endl;
  cout << "Width of rectangle: " << r.width << endl;


  r2.height = 10;
  r2.width = 12;
  r2.x = 'a';

  cout << "Size of rectangle2: " << sizeof(r2) << endl; // 12 bytes (even tho char is 1 byte)

  return 0;

}